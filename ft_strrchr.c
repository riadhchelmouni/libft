/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:13:28 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/17 19:13:44 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char     *ft_strrchr(const char *r, int y)
{
    int     a;
    a = ft_strlen(r);
    while (a >= 0)
    {
        if (r[a] == y)
            return ((char *)r + a);
            a--;
    }
    return (NULL);
}
