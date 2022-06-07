/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:11:18 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/07 20:48:21 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if (count == 0 || size == 0)
    {
        return NULL;
    }

    ptr = (void *)malloc((size * count));
    ft_bzero(ptr,(size * count));

    return (ptr);
}

/*#include <stdio.h>
int main()
{
    char *str;
    str = (char *)ft_calloc(5,10);

    printf("%s\n", str);
}*/
