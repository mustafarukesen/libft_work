/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesen <mesen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:44:40 by mesen             #+#    #+#             */
/*   Updated: 2022/10/21 16:44:40 by mesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	control(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	len;

	start = 0;
	i = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (0);
	while (s1[start] && control(set, s1[start]))
		start++;
	while (len > start && control(set, s1[len - 1]))
		len--;
	str = (char *)malloc(sizeof(char) * (len - start + 1));
	if (!str)
		return (0);
	while (start < len)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
