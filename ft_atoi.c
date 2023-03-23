/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:33:27 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/18 16:21:54 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *sr)
{
    long   i;
    long   nbr;
    long   isneg;

    i = 0;
    nbr = 0;
    isneg = 0;
    while (sr[i] !=  '\0' && (sr[i] == 32 || sr[i] == '\t' || sr[i] == '\n' || sr[i] == '\r' || sr[i] == '\v' || sr[i] == '\f'))
        i++;
    if (sr[i] != '\0' && sr[i] == '-')
    {
        isneg = 1;
        i++;
    }
    else if (sr[i] == '+')
        i++;
    while(sr[i] != '\0' && ft_isdigit(sr[i]))
        nbr = (nbr * 10) + (sr[i++] - '\0');
    if (isneg == 1)
        return (-nbr);
    return (nbr); 
}