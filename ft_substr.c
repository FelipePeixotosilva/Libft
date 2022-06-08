/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:50:24 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/07 21:10:02 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr = malloc(len);
    unsigned int i;
    unsigned int j;
    
    i = start;
    j = 0;
    while((s[i] != '\0') && (len > 0))
    {
        ptr[j] = s[i];
        len--;
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
