/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:11:18 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/16 00:00:58 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	
	if((count >= 2147483647 || size >= 2147483647))
	{
		return NULL;
	}
	ptr = (void *)malloc((size * count));
	if(ptr == NULL)
	{
		return (NULL);
	}
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
