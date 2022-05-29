/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 11:57:17 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/05/14 11:32:29 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int		i;
	unsigned char	*ptr;

	ptr = str;
	i = 0;
	while (n > 0)
	{
		ptr[i++] = c;
		n--;
	}
	return (ptr);
}
