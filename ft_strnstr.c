/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 05:07:59 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/14 20:46:32 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t cont;
	size_t i;

	cont = 0;
	i = 0;
	//len=len * -1;
	if ((len  >= ft_strlen(big)))
		len = ft_strlen(big)+1;
	
	while ((i < len) || (big[i]))
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

	return (NULL);
}

