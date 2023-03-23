/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:15:22 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/22 09:21:07 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int i)
{
    if(( i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
        return (1);
    return (0);
}