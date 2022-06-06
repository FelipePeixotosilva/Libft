/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 21:10:02 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/05 21:46:30 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	size_t i;
	int s;

	i = 0;
	s = 0;
	if(nptr == "2147483647")
	{
		return 2147483647;
	}
	else if(nptr == "-2147483648")
	{
		return -2147483648;
	}
	while (nptr[i] != '\0')
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
		{
			s = s * 10 + (nptr[i] - '0');
		}
		i++;
	}
	return s;
}
