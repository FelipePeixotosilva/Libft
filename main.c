/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:15:35 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/05/10 20:13:50 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>



int main () {
   
char s40[50], s41[50];
	strcpy(s40, "felipe");
	strcpy(s41, "beatriz");
   memmove(s40, s41, 3);
	printf("%s\n", s40);
	printf("-----------------------------------------------------------------------------\n");

   return(0);
}