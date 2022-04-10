#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

#include <stdbool.h>
#include <stdio.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_DEC, TK_NEG 
  
  /* TODO: Add more token types */
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
    {"[0-9]+", TK_DEC},     // dec
    {" +", TK_NOTYPE},    // spaces
    {"\\+", '+'},         // plus
    {"-", '-'},             // sub
    {"\\*", '*'},           // mul
    {"/", '/'},             // div
    {"\\(", '('},           // bra1
    {"\\)", ')'},           // bra2
    {"==", TK_EQ},        // equal
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
    int type;
    char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
    int position = 0;
    int i;
    regmatch_t pmatch;

    nr_token = 0;

    while (e[position] != '\0') {
        /* Try all rules one by one. */
        for (i = 0; i < NR_REGEX; i++) {
            if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
                char *substr_start = e + position;
                int substr_len = pmatch.rm_eo;

                Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
                    i, rules[i].regex, position, substr_len, substr_len, substr_start);

                position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

                switch (rules[i].token_type) {
                    case '+': case '-':  case '*': case '/': 
                    case '(': case ')':  case TK_DEC:
                        tokens[nr_token].type = rules[i].token_type;
                        strncpy(tokens[nr_token++].str, substr_start, substr_len);
                        tokens[nr_token].str[substr_len] = '\0';
                        // 匹配token，把它们存入数组tokens
                        break;
                    case TK_NOTYPE:
                        break;
                    }
                break;
            }
        }

        if (i == NR_REGEX) {
        printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
        return false;
        }
    }

    return true;
}

int check_parentheses(Token* start, Token* end) {
    int sign = 0;
    int count = 0;
    if (start->type!='(' || end->type!=')' ) {
        return false;
    }
    for (Token* sym = start; sym<end; sym++) {
        if(sym->type == '(') {
        count++;
        } else if(sym->type ==')') {
            count--;
        }
        if (count == 0) {
            sign=1;
        }
    }
    if (count == 1 && sign == 0) {
        return true;
    }
    if (count == 1 && sign == 1) {
        return false;
    }
    panic("Error expression");
}
// 用于检测前后是否有括号，如果有，将括号去掉。
// (1+(2+3))清掉括号，但是(1+2)+(3+4)则不清理
// 思路是如果开头写过括号，则会到最后闭合，提前闭合就是错误的。

Token *calc(Token* start, Token* end) {
    int sign = 0;
    int count = 0;
    Token* op = NULL;
    for (Token* sym = start; sym<=end; sym++) {
        if (sym->type == '(') {
      	    count++;
      	    continue;
    }
        if (sym->type == ')') {
            count--;
            continue;
        }
        if (count != 0) {
            continue;
        }
        if (sym->type == TK_DEC) {
            continue;
        }
        if (sign <= 2 && (sym->type == '+' || sym->type == '-')) {
            op = sym;
  	    sign = 2;
	}
        else if(sign <= 1 && (sym->type == '*' || sym->type == '/')) {
            op = sym;
            sign = 1;
        } else if (sign == 0 && (sym->type == TK_NEG)) {
            op = sym;
        }
    }
  return op;
}

int eval(Token* start, Token* end) {
  if (start == end) {
    return atoi(start->str);
  }
  else if(check_parentheses(start, end) == true) {
    return eval(start + 1, end - 1);
  }
  else{
    int val1, val2 = 0;
    Token *op = calc(start, end);
    //if (op->type != TK_NEG) {
        val1 = eval(start, op - 1);  
    //} 
        val2 = eval(op + 1, end);
    switch (op->type) {
        case '+': return val1 + val2;
        case '-': return val1 - val2;
        case '*': return val1 * val2;
        case '/': return val1 / val2;
        //case TK_NEG : return val2 * -1;//单目负号，是bug，还没解决
        default: panic("Error expression");
    }
  }
}

void check_Negative(Token* start, Token* end) {
    Token* op = start;
    for (; start <= end; start++) {
        if(start->type == '-' && (start - 1)->type != TK_DEC && (start - 1)->type != ')') {
        start->type = TK_NEG;
        }
    }
    start = op;
    return;
}

word_t expr(char *e, bool *success) {
    if (!make_token(e)) {
        *success = false;
        return 0;
    }

  /* TODO: Insert codes to evaluate the expression. */
    int num = eval(tokens, tokens + nr_token-1);
    return num;
}
/*
static int cmd_p(char *args) {
    if (args == NULL) {
        printf("No parameters\n");
        return 0;
    }
    bool success = true;
    int num = expr(args,&success);
    if (success==false) {
        printf("Wrong expression\n");
        return 0;
    } else {
        printf("0x%x or %dD\n",num,num);
        return 0;
    }
}*/
