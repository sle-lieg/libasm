#include "test_libasm.h"
#include <unistd.h>

int test_strlen()
{
	char *s1 = "abc";
	char *s2 = "";

	write(1, "a\n", 2);
	int l1 = ft_strlen(s1);
	int l2 = ft_strlen(s2);

	return (0);
}