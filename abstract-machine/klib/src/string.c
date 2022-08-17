#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)


size_t strlen(const char *s) {
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

char *strcpy(char *dst, const char *src) {
    for (size_t i = 0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    *(++dst) = '\0';
    return dst; 
}

char *strncpy(char *dst, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    for (; i < n; ++i) {
		dst[i] = '\0';
	} // 之后全部填充'\0'
    return dst; 
}

char *strcat(char *dst, const char *src) {
	size_t dst_len = strlen(dst), i;
	for (i = 0; src[i] != '\0'; i++) {
		dst[dst_len + i] = src[i];
	}
	dst[dst_len + i] = '\0';
	return dst;
} // append

int strcmp(const char *s1, const char *s2) {
  	size_t i = 0;
	for (; s1[i] != '\0' && s2[i] != '\0'; ++i) {
		if (s1[i] != s2[i]) return s1[i] - s2[i];
	}
	return s1[i] - s2[i];
}

int strncmp(const char *s1, const char *s2, size_t n) {
  	size_t i = 0;
	for (; s1[i] != '\0' && s2[i] != '\0' && i < n; ++i) {
		if (s1[i] != s2[i]) return s1[i] - s2[i];
	}
	if (i == n) return 0;
	return s1[i] - s2[i];  
} // 只比较前n位

void *memset(void *s, int c, size_t n) {
    char *prt = s;
    while (n--) {
        *(prt++) = c; 
    }
    return s;
}

void *memmove(void *dst, const void *src, size_t n) {
    char *ptrd = dst;
	const char *ptrs = src;
	if (dst < src) {
		while (n--) {
			*ptrd++ = *ptrs++;
		}
	} else {
		while (n--) {
			*(ptrd + n) = *(ptrs + n);
		}
	}
	return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  	char *ptrd = out;
	const char *ptrs = in;
	while (n--) {
		*ptrd++ = *ptrs++;
	}
	return out;  
}

int memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *ptr1 = s1, *ptr2 = s2;  
    while (n--) {
        if (*ptr1 != *ptr2) return *ptr1 - *ptr2;
    }
    return *ptr1 - *ptr2;
}

#endif
