#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptr1;
	unsigned const char *ptr2;
	int i;

	ptr1 = dest;
	ptr2 = src;
	i = 0;

	while((ptr2[i] != '\0') && (n > 0))
	{
	 	ptr1[i] = ptr2[i];
		i++;
		n--;
	}

	ptr1[i] = '\0';
	return (ptr1);
}	
