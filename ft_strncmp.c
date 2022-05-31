#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;

	while ((n > 0) && (s1[i] || s2[i]) != '\0')
	{
	
		if(s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}

		n--;
		i++;
	 
	}
	i--;
		return s1[i] - s2[i];

}
