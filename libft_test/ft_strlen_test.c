#include<stdio.h>
int ft_strlen(char *a)
{
    int count;
    
    count = 0;
    while (a[count] != '\0')
    {
        count++;
    }
    return count;
}

int main(void)
{
    printf("%d",ft_strlen("123"));
}