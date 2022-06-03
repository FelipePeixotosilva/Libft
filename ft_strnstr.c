#include "libft.h"


char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;

	while(haystack[i] != '\0')
	{
		if  (haystack[i] == needle[0])
		{
			while(haystack[i+j] == needle[j])
			
				j++;

				if(needle[j] == '\0')
				{
					return ((char *)&haystack[i]);
				}
				else 
				{
					return NULL;
				}	
			
		}
		i++;
	}
	return NULL;
}
