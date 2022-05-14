/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:55:51 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/05/14 10:56:11 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    int i;
    char *ptr;


    i = 0;
    ptr = dst;

    while (len > 0)
    {
        while ( ptr[i] != '\0')
        {
            ptr[i] = (*(char *)src++);
            i++;
            len--;
        }
    }
    return ptr;
}