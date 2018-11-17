#include "tester.h"

static void test_1(void)
{
	char s1[BUFF_SIZE] = "hello ";
	char s2[BUFF_SIZE] = "world";
	char s3[BUFF_SIZE] = "hello ";
	char s4[BUFF_SIZE] = "world";

	strcat(s1, 5);
	ft_strcat(s2, 5);
	if (strncmp(s1, s2, BUFF_SIZE))
		print_diff("strcat test 1 invalid", s1, s2);
	else
		printf("%sbzero test 1 valid%s\n", GREEN, END);
}

void test_strcat(void)
{
	test_1();
	// test_2();
	// test_3();
	// test_sigsegv_ft();
}