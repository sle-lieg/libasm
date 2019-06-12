#ifndef TEST_LIBASM_HPP
# define TEST_LIBASM_HPP

#include "libftasm.h"

#define RED "\e[1;31m"
#define GREEN "\e[1;32m"
#define YELLOW "\e[1;33m"
#define END "\e[0m"

typedef int (*test_is_ptr)(int);

void print_buffer(const char *s, const int len);
void show_error(const char *msg, const char *s1, const char *s2, const int len);

int test_bzero(void);
int test_is(test_is_ptr f1, test_is_ptr f2, const char *f_name);
int test_tolower(void);
int test_toupper(void);
int test_memcpy(void);
int test_memset(void);
int test_puts(void);
int test_strdup(void);
int test_strlen(void);
int test_strcat(void);
int test_putchar(void);
int test_putstr(void);

#endif