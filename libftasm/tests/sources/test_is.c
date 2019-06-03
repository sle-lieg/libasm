#include "test_libasm.h"

int test_is(test_is_ptr f1, test_is_ptr f2, const char *f_name)
{
	int i;
	int ret1;
	int ret2;
	int err;

	i = 0;
	err = 0;
	while (i < 255)
	{
		ret1 = f1(i);
		ret2 = f2(i);

		if (ret1 != ret2)
			err = 1;
		++i;
	}
	if (err)
		printf(RED "%s failed X\n" END, f_name);
	else
		printf(GREEN "%s √\n" END, f_name);

	return (0);
}