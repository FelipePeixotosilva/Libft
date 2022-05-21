#include "libft.h"
// imprimindo a string de dois vetores 
char *ft_strchr(const char *s, int c)
{
	char *ptr;
	int i;
	int cont;

	cont = 0;
	i = 0;
	ptr = (char *)s;
	while (s[i] != '\0')
	{
		if(s[i] == c)
		{
			while(s[i] != '\0')
			{
			ptr[cont] = s[i];
			i++;
			cont++;
			}
		}
		i++;
	}
	ptr[cont++] = '\0';
	return ptr;	
}