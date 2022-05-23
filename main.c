/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:15:35 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/05/22 19:32:40 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>



int main () {
   
   
   char dest[] = "Pedro Dias";
   char src[]  = "Pedro Henrique";
   char *pos = ft_memchr(dest,'d',sizeof(dest));
   printf("%s\n",pos);
   return(0);
}