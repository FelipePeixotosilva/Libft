#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	char *ptr;
	int pos;

	i = ft_strlen(s);
	pos = 0;

	while((i > 0) && (i <= ft_strlen(s)))
	{
		if(s[i] == c)
		{
			while(s[i] != '\0')
			{
				ptr[pos] = s[i];
				pos++;
				i++;
			}
			i = 0;
		}
		i--;
	}
	ptr[pos] = '\0';	
	return (ptr);
}
