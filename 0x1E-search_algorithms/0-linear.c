#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 * @array: a pointer to the first element of the array to search in.
 * @size: is the number of elements in the array.
 * @value: is the value to search for.
 * Description: searches for a value in an array of integers using
 * the Linear search algorithm.
 * Return: the first index where value is located, or -1 if value
 * is not present or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
