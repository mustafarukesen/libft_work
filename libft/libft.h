/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesen <mesen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:01:55 by mesen             #+#    #+#             */
/*   Updated: 2022/10/06 16:35:19 by mesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include<stdlib.h>
#include<unistd.h>

typedef struct s_list
{
    void    *content;
    struct s_list *next;
}   t_list;

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *str);

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *s);

void    *ftmemset(void *b, int c, unsigned int len);
void    ft_bzero(void *s, size_t n);

char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);


#endif