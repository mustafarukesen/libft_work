#include<stdio.h>
int ft_isalpha(int a)
{
    if ((a <= 'A' && a >= 'Z') || (a <= 'a' && a >= 'z'))
    {
        return (1);
    }
    return (0);
}

int main(void)
{
    printf("%d",ft_isalpha('g'));
}