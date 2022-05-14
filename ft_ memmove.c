/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 11:41:09 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/05/14 12:11:47 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

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