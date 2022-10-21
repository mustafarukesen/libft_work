/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesen <mesen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:44:33 by mesen             #+#    #+#             */
/*   Updated: 2022/10/21 16:44:33 by mesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && *(big + i))
	{
		if (*(big + i) == *(little + 0))
		{
			j = 0;
			while (*(big + i + j) == *(little + j) && i + j < len)
			{
				if (!*(little + j + 1))
					return ((char *)(big + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
