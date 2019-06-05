#include "test_libasm.h"
#include <unistd.h>
#include <string.h>
#include <ctype.h>

// void print_buffer(const char *s, const int len)
// {
// 	const char *tmp;

// 	tmp = s;
// 	while (tmp < (s + len))
// 	{
// 		if (*tmp)
// 			write(1, tmp++, 1);
// 		else
// 		{
// 			write(1, ".", 1);
// 			++tmp;
// 		}
// 	}
// }

void print_buffer(const char *s, const int len)
{
	const char *tmp;

	tmp = s;
	while (tmp < (s + len))
	{
		if (*tmp && isprint(*tmp))
			fprintf(stderr, "%c", *tmp++);
		else
		{
			fprintf(stderr, ".");
			++tmp;
		}
	}
}


void show_error(const char *msg, const char *s1, const char *s2, const int len)
{
	fprintf(stderr, RED "%s:\n" GREEN "+++", msg);
	print_buffer(s1, len);
	fprintf(stderr, "+++\n" YELLOW "---");
	print_buffer(s2, len);
	fprintf(stderr, "---\n" END);
	// write(1, msg, strlen(msg));
	// write(1, "\n", 1);
	// print_buffer(s1, len);
	// write(1, "\n", 1);
	// // write("+++\n" YELLOW "---");
	// print_buffer(s2, len);
	// write(1, "\n", 1);
	// write("---\n" END);
}