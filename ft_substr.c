/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:48:56 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/22 11:22:36 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *rn;
    size_t  a;

    if (!s)
        return (NULL);
    if ((char)start > ft_strlen(s))
        return (ft_strdup(" "));
    rn = malloc (sizeof (char) * (len + 1));
    a = 0;
    if (!rn)
        return (0);
    while (a < len)
    {
        rn[a] = *(s + start + a);
        a++;
    }
    rn[a] = '\0';
    return (rn);
}