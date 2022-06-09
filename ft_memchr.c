/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:39:50 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/09 20:57:54 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const char *ptr;
	size_t i;

	i = 0;
	ptr = s;
	while (n > 0)
	{
		if (ptr[i] == c)
		{
			return ((void *) &ptr[i]);
		}
		n--;
		i++;
	}
	return (NULL);

}
