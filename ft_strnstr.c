/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 05:07:59 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/14 21:35:24 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t cont;
	size_t i;
	
	cont = 0;
	i = 0;
	if(len < 0)
	{
		return ((char *)big);
	}
	
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
			if(big[i] == little[cont])
			{
				cont++;
			}
		}
		i++;
	}

	return (NULL);
}
/*
int main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	ft_strnstr(haystack, needle, -1);
	return (0);
}*/
