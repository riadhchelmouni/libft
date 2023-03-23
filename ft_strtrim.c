/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:17:56 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/22 11:23:31 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int			is_in_set(char c, const char *set)
{
    while (*set)
        if ( c == *set++)
            return (0);
    return (1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
    int  strt;
    size_t  end;
    char    *rn;

    if (!s1)
        return (NULL);
    if (!set)
        return (ft_strdup(s1));
    strt = 0;
    end = ft_strlen(s1);
    while (is_in_set(s1[strt], set) == 0)
        strt ++;
    if (strt == ft_strlen(s1))
    {
        if(!(rn = ft_strdup("")))
            return (NULL);
        else
            return (rn);
    }
    while (is_in_set(s1[end - 1], set) == 0)
        end--;
    rn = ft_substr(s1, strt, end - strt);
    return (rn);
}