#include "header/libftasm.h"
#include <stdio.h>

int main()
{
    char str[] = "abcdePOUET";
    printf("%s\n", str);

    ft_bzero(str + 5, 5);
    printf("%s\n", str);
    return (0);
}