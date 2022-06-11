/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:11:18 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/11 15:51:29 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = (void *)malloc((size * count));
	ft_bzero(ptr, (size * count));
	return (ptr);
}

/*#include <stdio.h>
int main()
{
    char *str;
    str = (char *)ft_calloc(5,10);

    printf("%s\n", str);
}*/
