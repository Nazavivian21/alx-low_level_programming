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
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
