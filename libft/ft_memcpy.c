/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesen <mesen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:42:52 by mesen             #+#    #+#             */
/*   Updated: 2022/10/21 16:42:52 by mesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destc;
	unsigned char	*srcc;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	while (i < n)
	{
		destc[i] = srcc[i];
		i++;
	}
	return (dest);
}
