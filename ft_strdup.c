/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:36:11 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/07 20:09:30 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *ptr;
    size_t  i;

    i = 0;
    if(s1 == NULL)
    return (NULL);

    ptr = (char *)malloc(sizeof(s1));
    while (s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    return (ptr);
}

/*#include <stdio.h>
int main()
{
    char str1[]= "\0";
    char *str2;
    str2 = ft_strdup(str1);
    printf("%s\n", str2);
}
*/
