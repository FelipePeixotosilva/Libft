/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:22:08 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/06/12 14:34:42 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	//char new;
	//new = '\n';
	if(s == NULL)
	{
		return ;
	}
	write(fd, s, ft_strlen(s));
	write(fd,"\n",1);
}
