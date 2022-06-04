
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	i = 0;

	while (n > 0)
	{
		if(((char *)s)[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
		n--;
	}
	return (NULL);
}
