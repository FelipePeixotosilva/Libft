/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 04:39:49 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/15 10:02:37 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s)+1;
	
	while ((i > 0))
	{
		i--;
		if (s[i] == (char) c)
		{
			return ((char *)&s[i]);
		}	
	}
	
	return (NULL);
}
