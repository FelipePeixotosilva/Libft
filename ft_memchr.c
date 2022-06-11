/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:39:50 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/11 16:23:54 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char *ptr;
	size_t i;

	i = 0;
	ptr = s;
	while (n > 0)
	{
		if (((char *)s)[i] == c)
		{
			return ((void *) &ptr[i]);
		}
		n--;
		i++;
	}
	return (NULL);

}
