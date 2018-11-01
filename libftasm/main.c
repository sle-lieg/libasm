#include "libftasm.h"
#include <string.h>
#include <unistd.h>

// static void	test_bzero() {
// 	char		src1[] = "abcdefgh";
// 	char		src2[] = "abcdefgh";
// 	const int	len = strlen(src1);

// 	bzero(src1 + 3, 5);
// 	ft_bzero(src2 + 3, 5);
// 	if (strncmp(src1, src2, len)) {
// 		printf("bzero test 1 failed:\n	bzero:|");
// 		write(1, src1, len);
// 		printf("|\n	ft_bzero:|");
// 		write(1, src2, len);
// 		printf("|\n");
// 	}

// 	bzero(src1, 0);
// 	ft_bzero(src2, 0);
// 	if (strncmp(src1, src2, len)) {
// 		printf("bzero test 2 failed:\n	bzero:|");
// 		write(1, src1, len);
// 		printf("|\n	ft_bzero:|");
// 		write(1, src2, len);
// 		printf("|\n");
// 	}

// 	bzero(src1, 1);
// 	ft_bzero(src2, 1);
// 	if (strncmp(src1, src2, len)) {
// 		printf("bzero test 3 failed:\n	bzero:|");
// 		write(1, src1, len);
// 		printf("|\n	ft_bzero:|");
// 		write(1, src2, len);
// 		printf("|\n");
// 	}
// }

// static void	test_strcat() {
// 	// char		src1[10] = "abcd";
// 	// char		src2[] = "efgh";
// 	char		src3[10] = "abcd";
// 	// char		src4[] = "efgh";
// 	char		*src5 = NULL;

// 	// char *dst1 = strcat(src1, src2);
// 	// char *dst2 = ft_strcat(src3, src4);
// 	// char *dst1 = strcat(src3, src5);
// 	char *dst2 = ft_strcat(src5, src3);
// 	// if (strcmp(dst1, dst2)) {
// 		// printf("strcat test 1 failed:\n");
// 		// puts(dst1);
// 		// puts(dst2);
// 		// write(1, dst1, strlen(dst1));
// 		// printf("|\n	ft_strcat:|");
// 		// write(1, dst2, strlen(dst2));
// 		// printf("|\n");
// 	// }

// }

int main()
{
	char dst[] = "Hello, World!";
	char src[] = "byebye, earth!";
	char *cpy = NULL;

	// puts(dst);
	ft_puts(dst);
	ft_bzero(dst + 5, strlen(dst) - 5);
	// puts(dst);
	ft_puts(dst);

	cpy = ft_strdup(dst);
	ft_puts(cpy);
	// // memcpy(dst, src, 26);
	// ft_memcpy(dst, src, 26);
	// ft_puts(dst);
	// int ret = ft_strlen(str);
	// printf("ret = %d\n", ret);
	// test_bzero();
	// test_strcat();
	// test_isalpha();
	// test_isdigit();
	// test_isalnum();
	// test_isascii();
	// test_isprint();
	// test_toupper();
	// test_tolower();
	// test_puts();
	// test_islower();
	// test_isupper();

    return (0);
}
