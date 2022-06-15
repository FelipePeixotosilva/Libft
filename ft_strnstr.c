/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 05:07:59 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/15 01:35:10 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t cont;
	size_t i;
	
	
	cont = 0;
	i = 0;
	if ((len  >= ft_strlen(big)))
		len = ft_strlen(big)+1;
	if(len != 0)
	{	
	while ((i <= len))
	{
		if(cont == ft_strlen(little))
		{
			 i = i - cont;
			return ((char *)&big[i]);
		}
		else if (big[i] == little[cont])
		{
			cont++;
		}
		else if (cont > 0)
		{
			i = i - (cont - 1);
			cont = 0;
			if(big[i] == little[cont])
			{
				cont ++;
			}
		}
		i++;
	}
	}

	return (NULL);
}
