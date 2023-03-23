/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:06:07 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/22 11:24:57 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *ri)
{
    char    *rn;
    size_t  ln;
    
    ln = ft_strlen (ri) + 1;
    rn = malloc (sizeof(char) * ln);
    if (!rn)
        return (0);
    rn = ft_memcpy (rn, ri, ln);
    return (rn);
}