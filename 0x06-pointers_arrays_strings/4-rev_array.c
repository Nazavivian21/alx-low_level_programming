#include "main.h"
/**
 * reverse_array - a function name
 * Description: a function that reverses an array
 * @a: pointer to an array
 * @n: number of elements of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	j = 0;
	while (j <= 0)
	{
		i = a[j];
		a[j++] = a[n];
		a[n--] = i;
	}
}
