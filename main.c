/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:15:35 by Felipe Peix       #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/14 10:52:03 by fpeixoto         ###   ########.fr       */
=======
/*   Updated: 2022/05/14 12:07:24 by fpeixoto         ###   ########.fr       */
>>>>>>> temp-branch
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>



int main () {
   
char s40[50], s41[50];
<<<<<<< HEAD
=======
   
   char dest[] = "oldstring";
   char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
>>>>>>> temp-branch

	char tam[]= "minha nossa";
	char fel[15];
	
	memmove(fel,tam, sizeof(fel));

	printf("%s \n",fel);
   return(0);
}