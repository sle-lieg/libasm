#ifndef LIBFTASM_H
# define LIBFTASM_H

# include <stdio.h>

void    ft_bzero(void *s, size_t n);
char    *ft_strcat(char *dest, const char *src);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_puts(const char *s);

size_t ft_strlen(const char *s);
// void *memset(void *s, int c, size_t n);
// void *memcpy(void *dest, const void *src, size_t n);
// char *strdup(const char *s);

// Bonus

int     ft_islower(int c);
int     ft_isupper(int c);

#endif
