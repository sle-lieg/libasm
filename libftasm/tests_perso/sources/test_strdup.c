#include <string.h>
#include "test_libasm.h"

int test_strdup()
{
	char *s1 = "hello world";

	char *s2;
	char *s3;

	s2 = ft_strdup(s1);
	s3 = strdup(s1);

	if (memcmp(s2, s3, strlen(s1)))
		show_error("test_strdup failed", s2, s3, strlen(s1));
	else
		printf(GREEN"test_strdup √\n" END);

	return (0);
}