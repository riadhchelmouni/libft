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

int	ft_atoi(const char *sr)
{
	long	i;
	long	nbr;
	long	isneg;

	i = 0;
	nbr = 0;
	isneg = 1;
	while (sr[i] == ' ' || (sr[i] >= '\t' && sr[i] <= '\r'))
		i++;
	if (sr[i] == '-')
	{
		isneg = -1;
		i++;
	}
	else if (sr[i] == '+')
		i++;
	while (sr[i] != '\0')
	{
		if (sr[i] >= '0' && sr[i] <= '9')
			nbr = nbr * 10 + sr[i] - '0';
		else
			break;
		i++;
	}
	return (isneg * nbr);
}
