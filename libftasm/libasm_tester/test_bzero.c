#include "tester.h"

static void test_1(void)
{
	char s1[BUFF_SIZE] = "hello world";
	char s2[BUFF_SIZE] = "hello world";

	bzero(s1, 5);
	ft_bzero(s2, 5);
	if (strncmp(s1, s2, BUFF_SIZE))
		print_diff("bzero test 1 invalid", s1, s2);
	else
		printf("%sbzero test 1 valid%s\n", GREEN, END);
}

static void test_2(void)
{
	char s1[BUFF_SIZE] = "hello world";
	char s2[BUFF_SIZE] = "hello world";

	bzero(s1 + 5, 5);
	ft_bzero(s2 + 5, 5);
	if (strncmp(s1, s2, BUFF_SIZE))
		print_diff("bzero test 2 invalid", s1, s2);
	else
		printf("%sbzero test 2 valid%s\n", GREEN, END);
}

static void test_3(void)
{
	char s1[BUFF_SIZE] = "hello world";
	char s2[BUFF_SIZE] = "hello world";

	bzero(s1, 0);
	ft_bzero(s2, 0);
	if (strncmp(s1, s2, BUFF_SIZE))
		print_diff("bzero test 3 invalid", s1, s2);
	else
		printf("%sbzero test 3 valid%s\n", GREEN, END);
}

static void test_sigsegv_ft(void)
{
	printf("Next line should be %s'[1]    {pid} segmentation fault'%s\n", YELLOW, END);
	ft_bzero(NULL, 1);
	printf("%sbzero test sigsegv invalid%s\n", RED, END);
}

void test_bzero(void)
{
	test_1();
	test_2();
	test_3();
	// test_sigsegv_ft();
}