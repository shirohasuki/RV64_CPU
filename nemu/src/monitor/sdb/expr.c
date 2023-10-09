// #include <isa.h>

// /* We use the POSIX regex functions to process regular expressions.
//  * Type 'man regex' for more information about POSIX regex functions.
//  */
// #include <regex.h>

// #include <stdbool.h>
// #include <stdio.h>

// enum {
//   TK_NOTYPE = 256, TK_EQ, TK_DEC, TK_NEG 
  
//   /* TODO: Add more token types */
// };

// static struct rule {
//   const char *regex;
//   int token_type;
// } rules[] = {

//   /* TODO: Add more rules.
//    * Pay attention to the precedence level of different rules.
//    */
//     {"[0-9]+", TK_DEC},     // dec
//     {" +", TK_NOTYPE},    // spaces
//     {"\\+", '+'},         // plus
//     {"-", '-'},             // sub
//     {"\\*", '*'},           // mul
//     {"/", '/'},             // div
//     {"\\(", '('},           // bra1
//     {"\\)", ')'},           // bra2
//     {"==", TK_EQ},        // equal
// };

// #define NR_REGEX ARRLEN(rules)

// static regex_t re[NR_REGEX] = {};

// /* Rules are used for many times.
//  * Therefore we compile them only once before any usage.
//  */
// void init_regex() {
//   int i;
//   char error_msg[128];
//   int ret;

//   for (i = 0; i < NR_REGEX; i ++) {
//     ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
//     if (ret != 0) {
//       regerror(ret, &re[i], error_msg, 128);
//       panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
//     }
//   }
// }

// typedef struct token {
//     int type;
//     char str[32];
// } Token;

// static Token tokens[32] __attribute__((used)) = {};
// static int nr_token __attribute__((used))  = 0;

// static bool make_token(char *e) {
//     int position = 0;
//     int i;
//     regmatch_t pmatch;

//     nr_token = 0;

//     while (e[position] != '\0') {
//         /* Try all rules one by one. */
//         for (i = 0; i < NR_REGEX; i++) {
//             if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
//                 char *substr_start = e + position;
//                 int substr_len = pmatch.rm_eo;

//                 Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
//                     i, rules[i].regex, position, substr_len, substr_len, substr_start);

//                 position += substr_len;

//         /* TODO: Now a new token is recognized with rules[i]. Add codes
//          * to record the token in the array `tokens'. For certain types
//          * of tokens, some extra actions should be performed.
//          */

//                 switch (rules[i].token_type) {
//                     case '+': case '-':  case '*': case '/': 
//                     case '(': case ')':  case TK_DEC:
//                         tokens[nr_token].type = rules[i].token_type;
//                         strncpy(tokens[nr_token++].str, substr_start, substr_len);
//                         tokens[nr_token].str[substr_len] = '\0';
//                         // 匹配token，把它们存入数组tokens
//                         break;
//                     case TK_NOTYPE:
//                         break;
//                     }
//                 break;
//             }
//         }

//         if (i == NR_REGEX) {
//         printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
//         return false;
//         }
//     }

//     return true;
// }

// int check_parentheses(Token* start, Token* end) {
//     int sign = 0;
//     int count = 0;
//     if (start->type!='(' || end->type!=')' ) {
//         return false;
//     }
//     for (Token* sym = start; sym<end; sym++) {
//         if(sym->type == '(') {
//         count++;
//         } else if(sym->type ==')') {
//             count--;
//         }
//         if (count == 0) {
//             sign=1;
//         }
//     }
//     if (count == 1 && sign == 0) {
//         return true;
//     }
//     if (count == 1 && sign == 1) {
//         return false;
//     }
//     panic("Error expression");
// }
// // 用于检测前后是否有括号，如果有，将括号去掉。
// // (1+(2+3))清掉括号，但是(1+2)+(3+4)则不清理
// // 思路是如果开头写过括号，则会到最后闭合，提前闭合就是错误的。

// Token *calc(Token* start, Token* end) {
//     int sign = 0;
//     int count = 0;
//     Token* op = NULL;
//     for (Token* sym = start; sym<=end; sym++) {
//         if (sym->type == '(') {
//       	    count++;
//       	    continue;
//     }
//         if (sym->type == ')') {
//             count--;
//             continue;
//         }
//         if (count != 0) {
//             continue;
//         }
//         if (sym->type == TK_DEC) {
//             continue;
//         }
//         if (sign <= 2 && (sym->type == '+' || sym->type == '-')) {
//             op = sym;
//   	    sign = 2;
// 	}
//         else if(sign <= 1 && (sym->type == '*' || sym->type == '/')) {
//             op = sym;
//             sign = 1;
//         } else if (sign == 0 && (sym->type == TK_NEG)) {
//             op = sym;
//         }
//     }
//   return op;
// }

// int eval(Token* start, Token* end) {
//   if (start == end) {
//     return atoi(start->str);
//   }
//   else if(check_parentheses(start, end) == true) {
//     return eval(start + 1, end - 1);
//   }
//   else{
//     int val1, val2 = 0;
//     Token *op = calc(start, end);
//     //if (op->type != TK_NEG) {
//         val1 = eval(start, op - 1);  
//     //} 
//         val2 = eval(op + 1, end);
//     switch (op->type) {
//         case '+': return val1 + val2;
//         case '-': return val1 - val2;
//         case '*': return val1 * val2;
//         case '/': return val1 / val2;
//         //case TK_NEG : return val2 * -1;//单目负号，是bug，还没解决
//         default: panic("Error expression");
//     }
//   }
// }

// void check_Negative(Token* start, Token* end) {
//     Token* op = start;
//     for (; start <= end; start++) {
//         if(start->type == '-' && (start - 1)->type != TK_DEC && (start - 1)->type != ')') {
//         start->type = TK_NEG;
//         }
//     }
//     start = op;
//     return;
// }

// word_t expr(char *e, bool *success) {
//     if (!make_token(e)) {
//         *success = false;
//         return 0;
//     }

//   /* TODO: Insert codes to evaluate the expression. */
//     int num = eval(tokens, tokens + nr_token-1);
//     return num;
// }
// /*
// static int cmd_p(char *args) {
//     if (args == NULL) {
//         printf("No parameters\n");
//         return 0;
//     }
//     bool success = true;
//     int num = expr(args,&success);
//     if (success==false) {
//         printf("Wrong expression\n");
//         return 0;
//     } else {
//         printf("0x%x or %dD\n",num,num);
//         return 0;
//     }
// }*/



#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

#include <memory/paddr.h>

enum {
  	TK_NOTYPE = 256,
  	TK_EQ,
	TK_NOTEQ,
	TK_LOGAND,
  	TK_DECNUM,
	TK_HEXNUM,
	TK_REG,
	TK_NEGATIVE,
	TK_POINTER
};

static int token_rank[512];

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  	{" +", TK_NOTYPE},    // spaces
  	{"\\+", '+'},         // +
  	{"-", '-'},           // -
  	{"\\*", '*'},         // *
  	{"/", '/'},           // /
  	{"\\(", '('},         // (
  	{"\\)", ')'},         // )
	{"==", TK_EQ},				// ==
	{"!=", TK_NOTEQ},			// !=
	{"&&", TK_LOGAND},			// &&
	{"0x([0-9]+)", TK_HEXNUM},	// 16-based number
  	{"[0-9]+", TK_DECNUM}, 	    // 10-based number
	{"\\$\\S+", TK_REG}			// register
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

static Token tokens[65536] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        /* Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start); */

        position += substr_len;

        /* ignore whitespaces */
        if (rules[i].token_type == TK_NOTYPE)
          break;
        /* save token type */
        tokens[nr_token].type = rules[i].token_type;
        switch (rules[i].token_type) {
					case TK_DECNUM:
					case TK_HEXNUM:
					case TK_REG:
            /* for TK_DECNUM and TK_HEXNUM, store its value */
            assert(substr_len <= 32); // buffer size check
						memset(tokens[nr_token].str, 0, sizeof(tokens[nr_token].str));
            memcpy(tokens[nr_token].str, substr_start, substr_len);
            break;
          default: break;
        }
        ++nr_token;
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

static bool check_parentheses(int p, int q, bool *success)
{
  /* not surrounded by parenthese */
  if (tokens[p].type != '(' || tokens[q].type != ')')
    return false;
  /* parentheses not match */
  int par = 1;
  for (int i = p + 1; i < q; ++i) {
    if (tokens[i].type == '(') ++par;
    if (tokens[i].type == ')') --par;
		if (par == 0) return false;
    if (par < 0) {
			*success = false;
			printf("Unclosed parentheses before %d.\n", i);
			return false;
		}
  }
  return true;
}

static uint64_t str2int(char *s, unsigned base)
{
	int len = strlen(s);
	uint64_t ret = 0;
	for (int i = 0; i < len; ++i) {
		ret = ret * base + s[i] - '0';
	}
	return ret;
}

static uint64_t eval(int p, int q, bool *success)
{
  if (*success == false) return 0;
  if (p > q) {
    /* Bad expression */
    *success = false;
		printf("Bad expression at eval(%d %d).\n", p, q);
		return 0;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
		if (tokens[p].type == TK_DECNUM) return str2int(tokens[p].str, 10u);
		else if (tokens[p].type == TK_HEXNUM) return str2int(tokens[p].str, 16u);
		else if (tokens[p].type == TK_REG) {
			uint64_t ret = isa_reg_str2val(tokens[p].str + 1, success);
			if (*success == false) {
				printf("No such register '%s'.\n", tokens[p].str);
				return 0;
			}
			return ret;
		} else {
			*success = false;
			printf("Token '%s' is not a number or a register.\n", tokens[p].str);
			return 0;
		}
  }
  else if (check_parentheses(p, q, success) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1, success);
  }
  else {
		if (*success == false) return 0;
    int op = -1;
    int par = 0;
    for (int i = p; i <= q; ++i) {
      if (tokens[i].type == '(') ++par;
      if (tokens[i].type == ')') --par;
      if (par == 0) {
				if (token_rank[tokens[i].type] == 0) continue;
				// Compare the level of operators, find the last lowest one.
				if (op == -1 || token_rank[tokens[i].type] >= token_rank[tokens[op].type]) op = i;
      }
    }
		// printf("Eval(%d, %d): main operator at %d.\n", p, q, op);
    /* check if we cannot find the main operator */
    if (op == -1) {
			*success = false;
			printf("Cannot find the main operator at eval(%d, %d).\n", p, q);
			return 0;
		}
		// For pointer and negative operation, p = op
		if (p == op) {
			uint64_t res = eval(op + 1, q, success);
			if (*success == false) return 0;
			if (tokens[op].type == TK_POINTER)
				return (uint64_t)(*guest_to_host(res));
			if (tokens[op].type == TK_NEGATIVE)
				return (uint64_t)(-res);
			*success = false;
			return 0;
		}
    uint64_t val1 = eval(p, op - 1, success);
    uint64_t val2 = eval(op + 1, q, success);
		// printf("%d %d: %u %c %u\n", p, q, val1, tokens[op].type, val2);

		if (*success == false) return 0;

    switch (tokens[op].type) {
      case '+':
        return val1 + val2;
      case '-':
        return val1 - val2;
      case '*':
        return val1 * val2;
      case '/':
        // The divisor cannot be zero
        if (val2 == 0) {
					success = false;
					printf("The divisior might be zero while calculating at eval(%d, %d).\n", p, q);
					return 0;
				}
        return val1 / val2;
			case TK_EQ:
				return val1 == val2;
			case TK_NOTEQ:
				return val1 != val2;
			case TK_LOGAND:
				return val1 && val2;
      default:
				*success = false;
				printf("Unknown token's type at %d.\n", op);
				return 0;
    }
  }
}

static void init_token_rank()
{
	#define r token_rank
	// 1: ( )
	r['('] = r[')'] = 1;
	// 2: -(negative) *(pointer)
	r[TK_NEGATIVE] = r[TK_POINTER] = 2;
	// 3: / *
	r['/'] = r['*'] = 3;
	// 4: + -
	r['+'] = r['-'] = 4;
	// 5: == !=
	r[TK_EQ] = r[TK_NOTEQ] = 5;
	// 6: &&
	r[TK_LOGAND] = 6;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

	init_token_rank();

	for (int i = 0; i < nr_token; ++i) {
		if (i == 0 || (tokens[i - 1].type != TK_DECNUM && tokens[i - 1].type != TK_HEXNUM
					&& tokens[i - 1].type != ')' && tokens[i - 1].type != TK_REG)) {
			// Pointer
			if (tokens[i].type == '*') tokens[i].type = TK_POINTER;
			// Negative number
			if (tokens[i].type == '-') tokens[i].type = TK_NEGATIVE;
		}
	}
  uint64_t ret = eval(0, nr_token - 1, success);

  if (*success == false) return 0;

  return ret;
}