/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:05:50 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/22 11:20:29 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *r, int y)
{
    int a;
    a = 0;
    if (r == NULL)
        return(NULL);
    while (r[a])
    {
        if (r[a] == (char)y)
            return ((char *)&r[a]);
            a++;
    }
    if (r[a] == (char)y)
        return ((char *)&r[a]);
    return (NULL);
}

