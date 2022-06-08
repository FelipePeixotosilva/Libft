/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:49:27 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/08 18:55:34 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	
	i = ft_strlen(dst);
	j = 0;
	if(size > 0)
	{
		while ((src[j] != '\0') && (i < (size)))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		return (ft_strlen(dst) + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
