/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:43:13 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/23 12:00:00 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	long	i;
	int	r;
	char	*rn;

	// if (!s)
	// 	return (NULL);
	r = ft_strlen(s);
	rn = (char *)malloc(sizeof(char) * (r + 1));
	if (rn == 0)
		return (rn);
	i = 0;
	while (i < r)
	{
		rn[i] = (*f)(i, rn[i]);
		i++;
	}
	rn[i] = 0;
	return (rn);
}