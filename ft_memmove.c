/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:13:04 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/05 18:42:28 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while ((n > 0) && ((unsigned char *)src)[i] != '\0')
	{
		(((unsigned char *)dest)[i]) = ((unsigned char *)src)[i];
		i++;
		n--;
	}
	return (((unsigned char *)dest));
}
