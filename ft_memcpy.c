#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *ptr1;
	unsigned const char *ptr2;
	int i;

	ptr1 = dest;
	ptr2 = src;
	i = 0;	

	ft_bzero(ptr1,n);
	while(n > 0)
	{
		ptr1[i] = ptr2[i];
		i++;
		n--;
	}
	

		return (ptr1);
}
