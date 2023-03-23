/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:52:43 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/21 12:04:33 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  size_t  get_digt(int n)
{
    size_t  i;

    i = 1;
    while (n /= 10)
        i++;
    return (i);
}

char    *ft_itoa(int n)
{
    char    *strn;
    size_t  dig;
    long    int num;
    num = n;
    dig = get_digt(n);
    if (n < 0)
    {
        num *= -1;
        dig++;
    }
    if (!(strn = (char *)malloc(sizeof(char) * (dig + 1))))
        return (NULL);
    *(strn + dig) = 0;
    while (dig--)
    {
        *(strn + dig) = num % 10 + '0';
        num = num / 10;
    }
    if (n < 0)
        *(strn + 0) = '-';
    return (strn);
}