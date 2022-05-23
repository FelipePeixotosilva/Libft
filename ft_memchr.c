
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
unsigned char *ptr1;
unsigned char *ptr2;
int i;
int pos;

ptr1 = ((char *)s);
i = 0;
while (n > 0)
{
	if (ptr1[i] == c)
	{	
		pos = i;
		i = 0;
		while (ptr1[pos] != '\0')
		{
			ptr2[i] = ptr1[pos];
			i++;
			pos++;
		}
		ptr2[i++] = '\0';
		return (ptr2);
	}
	i++;
	n--;
}

return NULL;
}