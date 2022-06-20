/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:50:24 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/19 21:21:55 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	j;

	if (len > ft_strlen(s) - start)
		ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (start > (unsigned int)ft_strlen(s))
		ptr = (char *)malloc(sizeof(char));
	i = start;
	j = 0;
	while (j < len && i < ft_strlen(s))
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}

/*int main()
{
	char *s;
	s = ft_substr("tripouille", 100, 1);
	printf("%s\n", s);
}*/
