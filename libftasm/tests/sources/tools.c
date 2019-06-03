#include "test_libasm.h"

void print_buffer(const char *s, const int len)
{
	const char *tmp;

	tmp = s;
	while (tmp < (s + len))
		printf("%c", *tmp++);
}

void show_error(const char *msg, const char *s1, const char *s2, const int len)
{
	printf(RED "%s:\n" GREEN "+++", msg);
	print_buffer(s1, len);
	printf("+++\n" YELLOW "---");
	print_buffer(s2, len);
	printf("---\n" END);
}