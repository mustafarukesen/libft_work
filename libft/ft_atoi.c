/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesen <mesen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:43:13 by mesen             #+#    #+#             */
/*   Updated: 2022/10/06 16:38:02 by mesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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