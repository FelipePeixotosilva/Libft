/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:45:12 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/05 17:04:59 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned const char *ptr1;
	unsigned const char *ptr2;

	ptr1 = s1;
	ptr2 = s2;
	i = 0;
	while (n > 0)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (((char *)s1)[i] - ((char *)s2)[i]);
		}
		n--;
		i++;
	}
	return (0);
}
