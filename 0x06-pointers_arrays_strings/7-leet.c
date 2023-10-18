char *leet(char *str)
{
	int i = 0;
	char leet[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[i] != '\0')
	{
		for (int j = 0; j < 10; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = replace[j];
				break; /** Once a match is found, no need to check further */
			}
		}
		i++;
	}

	return (str);
}
