char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')  /** Find the end of dest*/
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)   /** Copy at most n characters 
	from src to the end of dest */
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';  /** Add a terminating null byte */
	return (dest);
}

