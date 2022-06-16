/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:10:11 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/15 20:40:16 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *ptr;
    size_t s;
    
    s = (ft_strlen(s1) + ft_strlen(s2))+1;
    ptr = (char *)malloc(s);
    if(ptr == 0)
    {
        return NULL;
    }
    ft_strlcpy(ptr,s1,s);
    ft_strlcat(ptr,s2,s);
    
    return(ptr);
}

/*#include <stdio.h>
int main()
{
    char *test;
    test = ft_strjoin("esta","certo");
    printf("%s\n", test);
}
*/

