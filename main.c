/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Felipe Peixoto <felipe.peixoto@msn.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:15:35 by Felipe Peix       #+#    #+#             */
/*   Updated: 2022/05/05 21:50:58 by Felipe Peix      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>



int main(int argc, char *argv[])
{
    
    int x = ft_tolower('C');
    int y = tolower('C');

    printf("%c\n",x);
    printf("%c\n",y);
    
    return 0;
}