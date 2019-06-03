#include "test_libasm.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	test_bzero();

	test_is(&isalnum, &ft_isalnum, "test_isalnum");
	test_is(&isalpha, &ft_isalpha, "test_isalpha");
	test_is(&isascii, &ft_isascii, "test_isascii");
	test_is(&isdigit, &ft_isdigit, "test_isdigit");
	test_is(&islower, &ft_islower, "test_islower");
	test_is(&isprint, &ft_isprint, "test_isprint");
	test_is(&isupper, &ft_isupper, "test_isupper");

	test_tolower();
	test_toupper();

	test_memcpy();
	test_memset();
	test_puts();
	// test_strcat();
	// test_strdup();
	// test_strlen();
	// test_cat();

}