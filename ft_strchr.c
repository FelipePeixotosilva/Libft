#include "libft.h"
 
char *ft_strchr(const char *s, int c)
{
	int i;
	char *ptr;
	int pos;
	i = 0;
	pos = 0;

	while (i <= ft_strlen(s))
	{
		if(s[i] == c)
		{
			while(s[i] != '\0')
			{
				ptr[pos] = s[i];
				i++;
				pos++;
			}
		}
		i++;
	}
	ptr[pos] = '\0';
	return (ptr);	
}
