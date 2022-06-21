/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:32:48 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/20 22:12:48 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// static size_t cword(const char *s, char c)
// {
// 	size_t	i;
// 	size_t	key;
// 	size_t	count;
	
// 	i = 0;
// 	key = 0;
// 	count = 0;
// 	while (s[i])
// 	{
// 		while (s[i] == c && s[i])
// 			i++;
// 		while (s[i] != c && s[i])
// 		{
// 			key = 1;
// 			i++;
// 		}
// 		if (key == 1)
// 		{
// 			key = 0;
// 			count++;
// 		}
// 	}
// 		//printf("%lu\n",count);
// 	return (count);
// }

/*static size_t clet(const char *s, int index, char c)
{
	size_t count;

	count = 0;
	while (s[index] != c && s[index])
	{
		count++;
		index++;
	}	
	return (count);
}*/

static int ft_count(const char *s, char c)
{
	size_t count;
	size_t index;
	size_t start;

	count  = 0;
	index = 0;
	while (s[index])
	{
		while (s[index] == c && s[index])
			index++;
		start = index;
		while(s[index] != c && s[index])
			index++;
		if (start != index)
			count++;
	}
	return count;	
}
char	**ft_split(char const *s, char c)
{
	char 	**ptr;
	size_t 	index;
	size_t 	j;
	size_t start;

	index = 0;
	j = 0;
	
	if (s == 0)
		return NULL;
	ptr = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if(ptr == NULL)
		return NULL;
	while (s[index])
	{
		while (s[index] == c && s[index])
			index++;
		start = index;
		while(s[index] != c && s[index])
			index++;
		if (start != index)
			ptr[j++] = ft_substr(s, start ,index - start);
	}
	ptr[j] = NULL;
	return ptr;
}

// #include <stdio.h>
// int main()
// {
// 	char **ptr;
// 	size_t i;
// 	i = 0;
// 	//printf("%lu\n", clet("hoje",0,3));
// 	ptr = ft_split("      split       this for   me  !       ",' ');
// 	/*while(i < 6)
// 	{
// 	printf("%s\n", ptr[i]);
// 	i++;
// 	}*/
	
// }

