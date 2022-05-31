#include "libft.h"
#include <stdio.h>

int ft_atoi(const char *nptr)
{
	size_t i;
	size_t j;
	int ptr[ft_strlen(nptr)];

	i = 0;
	j = 0;
	ptr[j] = 0;
	

	while (nptr[i] != '\0')
	{
		if(nptr[i] >= '0' && nptr[i] <= '9')
		{
			ptr[j] = nptr[i] - 48;
			j++;
			printf("VALOR DE J: %lu\n",j);
		}	
		i++;
		printf("VALOR DE I:%lu\n",i);
	}
	return (*(int *)ptr);

}
