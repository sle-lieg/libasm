#include "test_libasm.h"
#include <string.h>

#define BUFF_SIZE 50

int test_strcat()
{
	char dest[BUFF_SIZE] = "hello";
	char ft_dest[BUFF_SIZE] = "hello";
	char *src = " world\n";

	char *ret1 = strcat(dest, src);
	char *ret2 = ft_strcat(ft_dest, src);

	if (memcmp(ret1, ret2, BUFF_SIZE))
		show_error("test_strcat failed", ret1, ret2, BUFF_SIZE);
	else
		printf(GREEN"test_strcat √\n" END);

	return (0);
}