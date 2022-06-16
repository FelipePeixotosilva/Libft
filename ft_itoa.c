/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:15:45 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/06/16 19:57:54 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int cvrt(int n)
{
   return n = n * -1;
}
static int qnbr(int n)
{
    int i;
    i = 0;
    if ( n < 0)
        {
            i++;
            n = cvrt(n);
        }
    while ( n > 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int n)
{
    size_t i;
    char *ptr;
    
    if(n == -2147483648)
    {

        return ft_strdup("-2147483648");
    }
    if(n == 2147483647)
    {
         return ft_strdup("2147483647");
    }
    i = 0;
    ptr = (char *)malloc((sizeof(char) * qnbr(n))+1);
    if(ptr == 0)
    {

        return (NULL);   
    }
    if(n < 0)
    {
        ptr[i] = '-';
        i++;
        n = cvrt(n);
    }
    while (i < (size_t)qnbr(n))
    {
        if(n >= 0 && n <= 9 )
        {
            ptr[i] = n + '0';
            i++;
        }
        else
        {
            n = n / 10;
            ptr[i] = n + '0';
            i++;
            n = n % 10;
            ptr[i] = n + '0'; 
            i++; 
        }
    
    }
    ptr[i] = '\0';
    return (ptr);
}
