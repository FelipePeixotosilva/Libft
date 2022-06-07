/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 21:10:02 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/07 19:34:42 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		s;
	int		j;

	i = 0;
	s = 1;
	j = 0;
	while ((nptr[i] >= 7) && (nptr[i] <= 10)
		|| (nptr[i] == 32) || (nptr[i] == '-') && (s != -1))
	{
		if (nptr[i] == '-')
		{
			s = -1;
		}
		i++;
	}
	while ((nptr[i] != '\0') && (ft_isalnum(nptr[i]) == 1))
	{
		j = j * 10 + (nptr[i] - '0');
		i++;
	}
	return (j * s);
}
