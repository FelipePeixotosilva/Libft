/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:10:11 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/08 19:54:23 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *ptr;
    size_t s;
    
    s = (ft_strlen(s1) + ft_strlen(s2))+1;
    ptr = (char *)malloc(s);
    ft_strlcat(ptr,s1,sizeof(s1)+1);
    ft_strlcat(ptr,s2,sizeof(s2)+1);
    
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
