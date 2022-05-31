
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;
	size_t i;
	size_t pos;

	ptr1 = ((unsigned char *) s);
	ptr2 = ((unsigned char *) ptr1);
	i = 0;
	pos = 0;
	
	if(ft_strlen((const char *)ptr1) == 0)
	{
		return "(null)";
	}

	while (n > 0)
	{
		if(ptr1[i] == c)	
		{
			while(ptr1[i] != '\0')
			{
				ptr2[pos] = ptr1[i];
				i++;
				pos++;
			}	
		}
		i++;
		n--;	
}
		ptr2[pos] = '\0';
		return (ptr2);
}
