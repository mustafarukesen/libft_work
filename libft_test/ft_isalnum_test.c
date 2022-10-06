#include<stdio.h>
#include "/Users/mesen/Desktop/libft_work/libft/libft.h"

int ft_isalnum(int c)
{
    if((ft_isalpha(c) != 0) || (ft_isdigit(c) != 0))
        return (1);
    else
        return (0);
}

int main(void)
{
    printf("%d",ft_isalnum('c'));
}