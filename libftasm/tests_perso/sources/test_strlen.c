#include "test_libasm.h"
#include <unistd.h>

int test_strlen()
{
	char *s1 = "abc";
	char *s2 = "";

	int l1 = ft_strlen(s1);
	int l2 = ft_strlen(s2);

	if (l1 != 3)
		fprintf(stderr, "test_strlen failed: %s len = 3 -> your len : %d", s1, l1);
	else if (l2 != 0)
		fprintf(stderr, "test_strlen failed: empty string len = 0 -> your len : %d", l1);
	else
		printf(GREEN"test_strlen √\n" END);

	return (0);
}