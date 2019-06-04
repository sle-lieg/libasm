#include <string.h>
#include "test_libasm.h"

int test_strdup()
{
	char *s1 = "abaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc\
abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc\
abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc\
abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabc\
abcabcabcabcabcbcc";

	char *s2;
	char *s3;

	s2 = ft_strdup(s1);
	s3 = strdup(s1);

	printf("%s\n", s2);
	printf("%s\n", s3);

	return (0);
}