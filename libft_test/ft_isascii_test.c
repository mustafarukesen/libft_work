#include<stdio.h>
int ft_isascii(int a)
{
    if (a >= 0 && a <= 127)
        return (1);
    else
        return (0);
}

int main(void)
{
    printf("%d",ft_isascii(132));
}