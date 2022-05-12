/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:19:02 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/05/10 20:02:16 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	int	i;
	char *ptr1;
	char *ptr2;

	ptr1 = str1;
	
	i = 0;
	while (n > 0)
	{
		ptr1[i] = (*(char *)str2++);
		i++;
		n--;
	} 
}