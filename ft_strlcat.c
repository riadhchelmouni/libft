/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:24:38 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/22 12:30:55 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dt, const char *cs, int dtsz)
{
    int  c;
    int  d;

    if (dtsz <= ft_strlen(dt) || dtsz == 0)
        return(dtsz + ft_strlen(cs));
    c = ft_strlen(dt);
    d = 0;
    while (cs[d] != '\0' && c + 1 < dtsz)
    {
        dt[c] = cs[d];
        c++;
        d++;
    }
    dt[c] = '\0';
    return(ft_strlen(dt) + ft_strlen(&cs[d]));
}