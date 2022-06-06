/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 05:07:59 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/05 11:40:08 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	cont;

	i = 0;
	cont = 0;
	while ((big[i] != '\0') || (len > 0))
	{
		if (cont == ft_strlen(little))
		{
			return ((char *)&big[i]-1);
		}
		else if (big[i] == little[cont])
		{
			cont++;
			i++;
		}
		else
		{
			cont = 0;
			i++;
		}
		len--;
	}
	return (NULL);
}
