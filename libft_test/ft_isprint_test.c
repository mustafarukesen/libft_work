#include<stdio.h>
int ft_isprint(int a)
{
    if (a >= 32 && a <= 126)
        return (1);
    else
        return (0);
}

int main(void)
{
    printf("%d",ft_isprint(133));
}