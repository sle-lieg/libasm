#include "test_libasm.h"
#include <string.h>

int test_memset()
{
	char s1[255] = "";
	char s2[255] = "";

	memset(s1, 'a', 200);
	ft_memset(s2, 'a', 200);

	if (strcmp(s1, s2))
		show_error("test_memset failed", s1, s2, 255);
	else
		printf(GREEN"test_memset √\n" END);

	return (0);
}