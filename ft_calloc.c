/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:11:18 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/17 00:01:17 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	
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
