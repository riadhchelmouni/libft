/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:19:20 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/22 12:45:25 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_bzero(void   *r, size_t  y)
{
	size_t  d;

	d  =  0;
	while (d < y)
		((char *) r)[d] = 0;
		d++;
		
}