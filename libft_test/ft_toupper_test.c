#include<stdio.h>
int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}
int main(void)
{
    printf("%d",ft_toupper('d'));
}