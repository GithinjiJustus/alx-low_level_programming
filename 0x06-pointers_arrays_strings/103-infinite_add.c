/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer that will store the result.
 * @size_r: The buffer size.
 *
 * eturn: A pointer to the result, or 0 if the result can't be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, carry = 0, sum;

	while (n1[i] != '\0' || n2[j] != '\0' || carry)
	{
		sum = (n1[i] != '\0' ? n1[i] - '0' : 0) + (n2[j] != '\0' ? n2[j] - '0' : 0) + carry;
		carry = sum / 10;
		if (k >= size_r - 1)
			return (0);
		r[k++] = (sum % 10) + '0';
		i++;
		j++;
	}

	r[k] = '\0';
	if (k >= size_r - 1)
		return (0);

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}

	return (r);
}
