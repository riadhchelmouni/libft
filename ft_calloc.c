/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:53:04 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/21 10:26:23 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t cnt, size_t sz)
{
    void    *rtn;
    rtn = malloc (sz * cnt);
    if (!rtn)
        return (NULL);
    ft_bzero(rtn, cnt);
    return(rtn);
}