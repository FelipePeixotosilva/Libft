/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/05/12 10:55:51 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/05/14 10:56:11 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
=======
/*   Created: 2022/05/14 11:41:09 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/05/14 12:11:47 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"
>>>>>>> temp-branch

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    int i;
    char *ptr;

<<<<<<< HEAD

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
=======
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
>>>>>>> temp-branch
}