#include "main.h"
/**
 * print_array - prints the elements in an array.
 * Description: prints n elements of an array of integers.
 * @a: an array of integers.
 * @n: the number of elements to be printed.
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
