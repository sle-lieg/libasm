#include "header/libftasm.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char dest[16] = "abcd";
    char src[] = "POUET\n";
    // char c[] = {'.', 'z', 'A', '?'};

    printf("%s\n", dest);

    // // ft_bzero(str + 5, 5);
    strcat(dest, src);
    printf("%s", dest);


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