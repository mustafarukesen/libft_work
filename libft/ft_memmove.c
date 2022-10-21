/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesen <mesen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:43:05 by mesen             #+#    #+#             */
/*   Updated: 2022/10/21 16:43:05 by mesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*destc;
	unsigned char	*srcc;

	if (dest == NULL && src == NULL)
		return (NULL);
	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	if (srcc < destc)
	{
		while (len--)
			destc[len] = srcc[len];
	}
	else
		ft_memcpy(destc, srcc, len);
	return (dest);
}
