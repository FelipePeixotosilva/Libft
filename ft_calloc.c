/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:11:18 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/15 21:44:58 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	
	if((count == SIZE_MAX || size == SIZE_MAX))
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
