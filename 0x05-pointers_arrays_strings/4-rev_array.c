/**
 * reverse_array - reverse array in memory
 *
 * @a: an array of integers
 *
 * @n: the number of elements to swap
 *
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int begin = 0;
	int end;

	while (begin < (n - 1))
	{
		end = a[n - 1]; /* set last position to begin */
		a[n - 1] = a[begin];
		a[begin] = end; /* set begin to end */
		n--; /* decrease/increase position */
		begin++;
	}
}
