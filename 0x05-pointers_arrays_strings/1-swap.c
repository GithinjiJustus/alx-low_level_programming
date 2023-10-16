/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first interger.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
