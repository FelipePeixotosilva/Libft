/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:54:23 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/05/12 19:07:16 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int z;
	int cont;

	i = 0;
	cont = 0; 
	if(size > 0)
	{
		while (ft_isprint(dst[cont]) == 1)
		{
			cont++;
		}
		while (size > 0)
		{
			dst [cont] = src [i];
			cont++;
			i++;
			size--; 
		}
		dst [cont++] = '\0';
	}

}
=======
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 11:39:29 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/05/14 12:04:44 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> temp-branch
