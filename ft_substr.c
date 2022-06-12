/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:50:24 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/12 12:13:51 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	j;

	ptr = (char *)malloc(len + 1);
	i = start;
	j = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	while (j < len)
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

/*#include <stdio.h>
int main()
{
    char str1 [] ="Testando";
    char *str2; 
    
    str2=ft_substr(str1,3,4);
    printf("%s\n",str2);   
}
*/
