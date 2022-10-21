/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesen <mesen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:32:34 by mesen             #+#    #+#             */
/*   Updated: 2022/10/06 16:38:02 by mesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;

	dlen = 0;
	while (dst[dlen] && dlen < dstsize)
		dlen++;
	i = dlen;
	while (src[dlen - i] && (dlen + i) < dstsize)
	{
		dst[dlen] = src[dlen - i];
		dlen++;
	}
	if (i < dstsize)
		dst[dlen] = '\0';
	return (i + ft_strlen(src));
}
