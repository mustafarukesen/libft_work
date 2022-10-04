/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesen <mesen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:27:18 by mesen             #+#    #+#             */
/*   Updated: 2022/10/04 14:30:32 by mesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int a)
{
    if (a >= '0' && a <= '9')
        return (1);
    else
        return (0);
}