#ifndef TESTER_H
# define TESTER_H

#include <strings.h>
#include <stdio.h>
#include <ctype.h>
#include "libftasm.h"

#define BUFF_SIZE 30
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define END "\033[0m"

void	print_diff(char *test, char *s1, char *s2);
void	test_bzero(void);
void	test_strcat(void);

#endif