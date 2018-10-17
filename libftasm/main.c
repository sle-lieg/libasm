#include "libftasm.h"
#include <string.h>
#include <unistd.h>

static void	test_bzero() {
	char		src1[] = "abcdefgh";
	char		src2[] = "abcdefgh";
	const int	len = strlen(src1);

	bzero(src1 + 3, 5);
	ft_bzero(src2 + 3, 5);
	if (strncmp(src1, src2, len)) {
		printf("bzero test 1 failed:\n	bzero:|");
		write(1, src1, len);
		printf("|\n	ft_bzero:|");
		write(1, src2, len);
		printf("|\n");
	}

	bzero(src1, 0);
	ft_bzero(src2, 0);
	if (strncmp(src1, src2, len)) {
		printf("bzero test 2 failed:\n	bzero:|");
		write(1, src1, len);
		printf("|\n	ft_bzero:|");
		write(1, src2, len);
		printf("|\n");
	}

	bzero(src1, 1);
	ft_bzero(src2, 1);
	if (strncmp(src1, src2, len)) {
		printf("bzero test 3 failed:\n	bzero:|");
		write(1, src1, len);
		printf("|\n	ft_bzero:|");
		write(1, src2, len);
		printf("|\n");
	}
}

static void	test_strcat() {
	char		src1[10] = "abcd";
	char		src2[] = "efgh";
	char		src3[10] = "abcd";
	char		src4[] = "efgh";

	char *dst1 = strcat(src1, src2);
	char *dst2 = ft_strcat(src3, src4);
	if (strcmp(dst1, dst2)) {
		printf("strcat test 1 failed:\n");
		puts(dst1);
		puts(dst2);
		// write(1, dst1, strlen(dst1));
		// printf("|\n	ft_strcat:|");
		// write(1, dst2, strlen(dst2));
		// printf("|\n");
	}

}

int main()
{
	// test_bzero();
	test_strcat();
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

    // char dest[16] = "abcdefg";

    // char src[] = "POUET\n";
    // // char c[] = {'.', 'z', 'A', '?'};

    // printf("%s\n", dest);

    // // // ft_bzero(str + 5, 5);
    // strcat(dest, src);
    // printf("%s", dest);


    // for (int i = 0; i < 4; i++) {
    //     if (ft_isalpha(c[i]))
    //         printf("char %c is alphanumeric\n", c[i]);
    //     else
    //         printf("char %c is NOT alphanumeric\n", c[i]);
        // printf("char %c is ", c[i]);
        // if (ft_isupper(c[i]))
        //     printf("Upper case\n");
        // else if (ft_islower(c[i]))
        //     printf("Lower case\n");
        // else
        //     printf("Not a character\n");
    // }
    return (0);
}
