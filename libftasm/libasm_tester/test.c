#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "../header/libftasm.h"

#define BUFF_SIZE 30

// void f(void)
// {
// 	char e;
// 	e = 'e';
// 	printf("%p\n", &e);
// }

// int main()
// {
// 	char a;
// 	char b;
// 	char c = 'c';
// 	char d = 'd';

// 	printf("%p\n", &a);
// 	printf("%p\n", &b);
// 	printf("%p\n", &c);
// 	printf("%p\n", &d);
// 	a = 'a';
// 	b = 'b';
// 	f();
// 	return (0);
// }

int				main(int argc, char **argv)
{
	int			i;
	int			fd;


	if (argc == 3)
	{
		i = atoi(argv[1]);
		if (i == 0)
		{
			fd = open(argv[2], O_RDONLY);
			if (fd > 0)
			{
				ft_cat(fd);
				close(fd);
			}
		}
		else if (i == 1)
		{
			ft_cat(-1);
		}
		else if (i == 2)
		{
			fd = open(argv[2], O_RDONLY);
			if (fd > 0)
			{
				close(fd);
				ft_cat(fd);
			}
		}
	}
	return (0);
}