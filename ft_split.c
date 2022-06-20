/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:32:48 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/20 00:59:35 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t cword(const char *s, char c)
{
	size_t	i;
	size_t	key;
	size_t	count;
	
	i = 0;
	key = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			key = 1;
			i++;
		}
		if (key == 1)
		{
			key = 0;
			count++;
		}
	}
	return (count);
}

static size_t clet(const char *s, int index, char c)
{
	size_t count;

	count = 0;
	while (s[index] != c && s[index])
	{
		count++;
		index++;
	}	
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char 	**ptr;
	size_t 	index;
	size_t 	j;

	index = 0;
	j = 0;
	if (s == 0)
		return NULL;
	ptr = (char **)malloc (sizeof(char *) * cword(s,c) + 1);
	if(ptr == NULL)
		return NULL;
	while (j < cword(s, c) && s[index])
	{
		while (s[index] == c && s[index])
			index++;
		if (s[index] != '\0')
			ptr[j] = ft_substr(s, index, clet(s, index, c));
		while(s[index] != c && s[index])
			index++;
		j++;	
	}
	return ptr;
}

/*#include <stdio.h>
int main()
{
	char **ptr;
	size_t i;
	i = 0;
	ptr = ft_split("42 Rio !",' ');
	while(i < cword("42 Rio !",' '))
	{
	printf("%s\n", ptr[i]);
	i++;
	}
	*/
