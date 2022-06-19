/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:32:48 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/18 21:10:24 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static size_t cword(const char * s, int c)
{
    size_t count;
    size_t i;
    size_t key;
    
    count = 0;
    i = 0;
    key = 0; 
    while(s[i])
    {   
        while (s[i] == c && s[i])
            i++;
        while (s[i] != c && s[i])
        {
            key = 1;
            i++;
        }
        if(key == 1)
        {
            count++;
            key = 0;    
        }    
    }
    return (count);
}
static size_t clet(const char *s, size_t index,int c)
{
    size_t i;
    size_t count;

    i = index;
    count = 0;
        while (s[i] != c && s[i])
        {
            count++;
            i++;
        }
        return (count);
} 
char **ft_split(char const *s, char c)
{
    char **ptr;
    size_t i;
    size_t j;
    size_t s_word;
    if(!s)
        return (NULL);
    ptr = malloc(sizeof(char *) * cword(s,c) + 1);
   
     if(!ptr)
         return (NULL);
    i = 0;
    j = 0;
    while(s[i])
    {
        while(s[i] == c && s[i])
            i++;
        s_word = clet(s,i,c);
        if( s[i] != '\0')
            ptr[j] = ft_substr(s,i,s_word);
       // printf("Aqui :%s\n", ptr[j]);
        j++;
        while(s[i] != c && s[i])
            i++; 
    }
    ptr[j] = NULL;
    return (ptr);
}
#include <stdio.h>
int main()
{
    char **ptr;
    int i;

    i = 0;
    ptr = ft_split("42 Rio !", ' ');
    while (i < 3)
    {
        printf("ptr[%i] = %s\n",i, ptr[i]);
        i++;
    }
}
