/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:27:36 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/17 17:57:41 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *t, const void *c, size_t n)
{
    void    *o_t;
    if (!t && !c)
        return (NULL);
    o_t = t;
    while (n--)
        *((char *)t++) = *((char*)c++);
    return(o_t); 
}