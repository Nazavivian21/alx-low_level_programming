#include "main.h"
/**
 * print_square - a function that prints a square.
 * Description: this function prints out a character in for of a square.
 * @size: a variable used to store the size of the square.
 * Return: void.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
