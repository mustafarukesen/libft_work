/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesen <mesen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:44:45 by mesen             #+#    #+#             */
/*   Updated: 2022/10/21 16:44:45 by mesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*son;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	a = 0;
	while ((a < len) && s[start + a] != '\0')
		a++;
	son = (char *)malloc((sizeof(char) * a) + 1);
	if (son == NULL)
		return (NULL);
	b = 0;
	while (b < a)
	{
		son[b] = s[b + start];
		b++;
	}
	son[b] = '\0';
	return (son);
}
