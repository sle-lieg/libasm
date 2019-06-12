#include "test_libasm.h"
#include <fcntl.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int fd;
	if (ac == 2)
		fd = open(av[1], O_RDONLY);
	else
		fd = 0;

	if (fd == -1)
	{
		fprintf(stderr, "test_cat: [%s]: invalid\n", av[1]);
		return (-1);
	}
	ft_cat(fd);
	close(fd);

	ft_cat(-1);

	return (0);
}