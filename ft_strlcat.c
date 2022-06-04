/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:54:23 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/05/14 13:07:07 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
        int i;
        int cont;
        size_t s;
		size_t dec = (size - (ft_strlen(dst)-1));	
		cont = ft_strlen(dst);
        s = ft_strlen(dst) + ft_strlen(src);
        i = -1;
        
        if(size > 0)
        {
               
                while (dec  > 0)
                {
                        dst [cont] = src [i];
                        cont++;
                        i++;
                        dec--;
				
                }
                dst [cont] = '\0';
                return s;
        }
        return (ft_strlen(src) + size) ;
}
