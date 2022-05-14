/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:06:06 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/05/12 13:20:27 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	unsigned int n;
	int i;

	i = 0;
	n = dstsize;

	while (n > 0)
	{
		dst[i] = src [i];
		n--;
		i++;
	}
}