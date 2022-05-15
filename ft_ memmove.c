/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:55:51 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/05/14 22:16:11 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    int i;
    char *ptr;

    i = 0;
    ptr = dst;

    while ( len > 0)
    {
        while (ptr[i] != '\0')
        {
            ptr[i++] = (*(char *)src++);
            len--;
        }
    }
    return (ptr);

}
