#include<stdio.h>
#include "/Users/mesen/Desktop/libft_work/libft/libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *ptr;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = c;
        i++;
    }
    return (s);
}

int main(void)
{
    ft_memset("dsfasfs",1,5);
}