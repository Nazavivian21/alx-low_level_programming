#include "main.h"
/**
 * swap_int - a funtion
 * Description: It swaps the value of two integers
 * @a: a pointer to an integer
 * @b: a pointer to an integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
