#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>
#include <strings.h>
#include "libft.h"

int main()
{
	//FUNÇÕES IS
	/*
	printf("--ISALNUM--\n");
	printf("FUNCAO ORIGINAL ISALNUM:%d\n", isalnum('2'));
	printf("FUNCAO COPIA FT_ISALNUM:%d\n\n", ft_isalnum('2'));
	printf("--ISALPHA--\n");
	printf("FUNCAO ORIGINAL ISALPHA:%d\n",isalpha('y'));
	printf("FUNCAO COPIA FT_ISALPHA:%d\n\n",ft_isalpha('y'));
	printf("--ISASCII--\n");
	printf("FUNCAO ORIGINAL ISASCII:%d\n",isascii('/'));
	printf("FUNCAO COPIA FT_ISASCII:%d\n\n",ft_isascii('/'));
	printf("--ISDIGIT--\n");
	printf("FUNCAO ORIGINAL ISDIGIT:%d\n",isdigit('3'));
	printf("FUNCAO COPIA FT_ISDIGIT:%d\n\n", ft_isdigit('3'));
	printf("--ISPRINT--\n");
	printf("FUNCAO ORIGINAL ISPRINT:%d\n",isprint(' '));
	printf("FUNCAO COPIA FT_ISPRINT:%d\n\n",ft_isprint(' '));
	*/
	//FUNÇÃO STRLEN
	/*
	char test[] = "";
	printf("--STRLEN--\n");
	printf("FUNCAO ORIGINAL :%ld\n", strlen(test));
	printf("FUNCAO COPIA :%ld\n", ft_strlen(test));
	*/
	//FUNÇÃO MEMSET
	/*
	char test1[] = "TESTE";
	printf("--MEMSET--\n");
	 memset(test1,'p',10);
	printf("FUNCAO ORIGINAL: %s\n", test1);
	ft_memset(test1,'o',10);
	printf("FUNCAO COPIA %s\n", test1);
	*/
	//FUNÇÃO BZERO
	/*
	char test1[] = "testando";
	char test2[] = "testando";
	bzero(test1,0);
	ft_bzero(test2,0);
	printf("%s\n",test1);
	printf("%s\n",test2);
	*/
	//MEMCPY
	/*
	char test1 [] = "Testando";
	char test2 [30];

	ft_memcpy(test2,test1,sizeof(test2));
	printf("%s\n",test2);
	*/
	//--STRNSTR--
	/*
	char test[] = "testando";
	printf("%s \n", ft_strnstr(test,"a",0));
	*/
	// --STRLCPY--  comando cc main.c -lbsd
	/*
	char test[] = "teste";
	char test2[30];
	ft_strlcpy(test2,test,0);
	printf("%s\n",test2);
	*/
	//-- MEMCMP--
	/*
	char test1[] = "";
	char test2[] = "a";
	printf("%d\n", memcmp(test1,test2,4));
	*/
	//--strncmp--
	/*
	char test1[] = "tr";
	char test2[] = "a";
	
	printf("%d\n", strncmp(test1,test2,4));
	*/
	//--MEMSTR--
	/*	
	char test[] = "testando";
	printf("%s\n", (char *)ft_memchr(test,'s',sizeof(test)));
	*/
	// --MEMMOVE--
	/*
	char test1[] = "string";
	char test2[30];
	ft_memmove(test2,test1,8);
	printf("%s\n", test2);
	*/
	//--STRLCAT--
	/*
	char test1[30] ="testando";
	char test2[] =" funcionando";

	ft_strlcat(test1,test2,30);
	printf("%s\n", test1);
	*/
	printf("%d",ft_atoi("-2147483648"));
}
