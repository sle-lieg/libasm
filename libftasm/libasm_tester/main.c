#include "tester.h"

void print_buffer(char *buff, size_t len)
{
	for (int i = 0; i < BUFF_SIZE; i++)
	{
		if (isprint(buff[i]))
			putchar(buff[i]);
		else
			putchar(' ');
	}	
}

void	print_diff(char *test, char *s1, char *s2)
{
	printf("%s%s%s\n", RED, test, END);
	printf("\tlibc: {");
	print_buffer(s1, BUFF_SIZE);
	printf("}\n\tyour: {");
	print_buffer(s2, BUFF_SIZE);
	printf("}\n");

	// printf("\tlibc: {%s}\n", s1);
	// printf("\tyour: {%s}\n", s2);
}

int main(int ac, char **av)
{
	test_bzero();
	test_strcat();
	return (0);
}