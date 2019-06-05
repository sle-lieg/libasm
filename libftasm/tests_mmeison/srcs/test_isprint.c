
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "tests_lib.h"

int		ft_isprint(int c);

extern int		g_verbose;

static int		unit_test_isprint(int test)
{
	char const	fmt[] = "%s test ft_isprint on char %c (%#x)";
	int			status;
	int			ft_res, off_res;
	int			fd = 0;

	off_res = isprint(test);

	SAVE_REGISTERS();
	ft_res = ft_isprint(test);

	if (CHECK_REGISTERS() != 0)
	{
		fd = 2;
		status = REGISTER;
	}
	else if ((ft_res != 0 && off_res != 0) || (ft_res == 0 && off_res == 0)) {
		fd = 1;
		status = WORKS;
	}
	else {
		fd = 2;
		status = ERROR;
	}

	if (g_verbose == NORMAL || g_verbose == FULL)
	{
		dprintf(fd, fmt, STATE_STR[status], test, test);
		if (g_verbose == FULL)
			dprintf(fd, "(off: %d, mine: %d)", off_res, ft_res);
		dprintf(fd, "\n");
	}
	return status;
}

int			test_isprint(void)
{
	int				status = WORKS;
	int				test_status;

	for (int i = -10; i <= 127; i++) {
		if ((test_status = unit_test_isprint(i)) > status) {
			status = test_status;
		}
	}
	for (int i = 0x010000; i < 0x010100; i++) {
		if ((test_status = unit_test_isprint(i)) > status) {
			status = test_status;
		}
	}
	return status;
}

