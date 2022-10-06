#include<stdio.h>
size_t ft_strlen(char *c)
{
    size_t count;
    
    while (c != '\0')
    {
        count++;
    }
    return count;
}

int main(void)
{
    printf("%d",ft_strlen("123"));
}