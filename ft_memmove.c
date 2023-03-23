/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:09:08 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/21 10:59:45 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dt, const void  *sc, size_t ln)
{
    char    *s;
    char    *d;
    size_t  r;

    s = (char *)sc;
    d = (char *)dt;
    r = 0;
    if (d > s)
        while (ln > 0)
            d[ln] = s[ln];
    else
        while (r < ln)
            {
                d[r] = s[r];
                r++;
            }

    return(dt);       
}