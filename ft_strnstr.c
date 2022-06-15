/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 05:07:59 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/15 09:19:32 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	
	
	j = 0;
	i = 0;
	if(*little == 0)
	{
		return (char *)big;
	}
	if ((len == 0) || (*big == 0))
	{
		return NULL;
	}
	while (i < len && big[i])
	{
		j = 0;
		while ((i + j < len) && (big[i + j] == little[j]) && little[j])
		{
			j++;
		if (little[j] == '\0')
		{
			return ((char *)big + i);
		}
		}
		i++;
	}
	return (NULL);
}
