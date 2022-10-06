#include<stdio.h>

int ft_atoi(const char *str)
{
    int i;
    long    sum;
    int sign;

    i = 0;
    sum = 0;
    sign = 1;
    while (*(str + i) == ' ' || (*(str + i) >= 9 && *(str + i) <= 13))
        i++;
    if (*(str + i) == '+' || *(str + i) == '-')
    {
        if (*(str + i) == '-')
            sign *= -1;
        i++;
    }
    while (*(str + i) && (*(str + i) >= '0' && *(str + i) <= '9'))
    {
        sum = (sum * 10) + ((*(str + i) - 48) * sign);
        i++;
        if (sum > 2147483647)
            return (-1);
        if (sum < -2147483648)
            return (1);
    }

    return (sum);
}

int main(void)
{
    char c[4] = "1234";
    printf("%d",ft_atoi("              \t\n-12312"));
}