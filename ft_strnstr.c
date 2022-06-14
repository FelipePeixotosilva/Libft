/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 05:07:59 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/12 11:14:10 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t cont;
	size_t i;

	cont = 0;
	i = 0;
	if((len > 0) && (big != NULL) && (little != NULL))
	{
	while ((i < len ) && (big[i] != '\0'))
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
		else
		{
			cont = 0;
		}
		i++;
	}
}
	return (NULL);
}

