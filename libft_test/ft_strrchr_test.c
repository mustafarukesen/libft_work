#include<stdio.h>
char    *ft_strrchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    while (i >= 0)
    {
        if (str[i] == (char)c)
            return ((char *)&str[i]);
        i--;
    }
    return (0);
}
int main(void)
{
    printf("%s",ft_strrchr("bilgisayar",'i'));
}