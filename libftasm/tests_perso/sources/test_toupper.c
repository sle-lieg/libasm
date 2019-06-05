#include "test_libasm.h"
#include <ctype.h>

int test_toupper()
{
	int i;
	int ret1;
	int ret2;
	int err;

	i = 0;
	err = 0;
	while (i < 255)
	{
		ret1 = toupper(i);
		ret2 = ft_toupper(i);

		if (ret1 != ret2)
			err = 1;
		++i;
	}
	if (err)
		printf(RED "test_toupper failed X\n" END);
	else
		printf(GREEN "test_toupper √\n" END);

	return (0);
}