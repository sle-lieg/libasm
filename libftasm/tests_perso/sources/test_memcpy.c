#include "test_libasm.h"
#include <string.h>

static void test_memcpy_3()
{
	char s1[255] = "hello ";
	char s2[255] = "hello ";

	memcpy(s1 + 6, "world !", 4);
	ft_memcpy(s2 + 6, "world !", 4);

	if (strcmp(s1, s2))
		show_error("test_memcpy_3 failed", s1, s2, 14);
	else
		printf(GREEN"test_memcpy_3 √\n" END);
}

static void test_memcpy_2()
{
	char s1[255] = "hello ";
	char s2[255] = "hello ";

	memcpy(s1, "world !", 5);
	ft_memcpy(s2, "world !", 5);

	if (strcmp(s1, s2))
		show_error("test_memcpy_2 failed", s1, s2, 14);
	else
		printf(GREEN"test_memcpy_2 √\n" END);
}

// normal use
static void test_memcpy_1()
{
	char s1[255] = "hello ";
	char s2[255] = "hello ";

	memcpy(s1, "world !", 7);
	ft_memcpy(s2, "world !", 7);

	if (strcmp(s1, s2))
		show_error("test_memcpy_1 failed", s1, s2, 14);
	else
		printf(GREEN"test_memcpy_1 √\n" END);
}

int test_memcpy()
{
	test_memcpy_1();
	test_memcpy_2();
	test_memcpy_3();

	return (0);
}