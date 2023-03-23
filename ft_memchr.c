/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:42:42 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/17 17:57:41 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *r, int y, size_t n)
{
    const char  *sr;
    size_t  i;

    sr = (const char *)r;
    i = 0;
    while (i < n)
    {
        if (sr[i] == y)
            return ((void *)(r + i));
        i++;
    }
    return (0);
}