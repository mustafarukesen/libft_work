/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesen <mesen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:43:49 by mesen             #+#    #+#             */
/*   Updated: 2022/10/21 16:43:49 by mesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_str(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

int	ft_count(const char *s, char c)
{
	char	pre_c;
	size_t	i;

	i = 0;
	pre_c = c;
	while (*s)
	{
		if (pre_c == c && *s != c)
			i++;
		pre_c = *s;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	next;
	char	**strs;

	i = 0;
	if (s == NULL)
		return (NULL);
	strs = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (strs == NULL)
		return (NULL);
	while (*s)
	{
		next = ft_str(s, c);
		if (next)
		{
			strs[i] = ft_substr(s, 0, next);
			s += next;
			i++;
		}
		else
			s++;
	}
	strs[i] = NULL;
	return (strs);
}
