#include "test_libasm.h"
#include <stdio.h>

int test_putchar()
{
	for (int i = -300; i < 500; i++) {
		int ret1 = putchar(i);
		if (ret1 != EOF)
			printf("+<%d : %d>\n", i, ret1);

		int ret2 = ft_putchar(i);
		if (ret2 != EOF)
			printf("-<%d : %d>\n", i, ret2);
	}

	return (0);
}