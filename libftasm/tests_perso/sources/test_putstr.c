#include "test_libasm.h"
#include <stdio.h>

int test_putstr()
{
	const char *s1 = "hello world\n";

	ft_putstr(s1);

	return (0);
}