char *ft_strrchr(const char *s, int c)
{
	int i;
	int pos;
	char *ptr;
	
	i = 0;
	pos = 0;
	ptr = (char *)s;


	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			pos = i;
		}
		i++;
	}
	i = 0;
	while (s[pos] != '\0')
	{
		ptr[i] = s[pos];
		i++;
		pos++;
	}

	ptr[pos++] = '\0';
	return ptr;	

}