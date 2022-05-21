/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:15:35 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/05/15 18:04:50 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>



int main () {
   
   
   char dest[] = "oldstring";
   char src[]  = "newstring";
   printf("%s\n",ft_strchr(dest,'s'));
   return(0);
}