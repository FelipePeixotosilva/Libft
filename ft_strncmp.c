#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if((ft_strlen(s1) - n) == (ft_strlen(s2) - n))
	{
		return 0;
	}
	else if((ft_strlen(s1) - n) > (ft_strlen(s2) - n))

	{
		return (ft_strlen(s1) - ft_strlen(s2));
	}
	else
	{
		return (ft_strlen(s1) - ft_strlen(s2));
	}
	
}
