/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesen <mesen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:44:46 by mesen             #+#    #+#             */
/*   Updated: 2022/10/04 14:45:50 by mesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int a)
{
    if (a >= 32 && a <= 126)
        return (1);
    else
        return (0);
}