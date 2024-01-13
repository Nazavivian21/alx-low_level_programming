#include "main.h"
/**
 * print_times_table - a function name
 * Description: Prints outs the n times table
 * @n: an integer variable to store values
 * Return: void
 */
void print_times_table(int n)
{
	int row, col, result;

	if (n > 15 || n < 0)
		;
	else
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				result = row * col;
				if (result < 10)
				{
					if (col != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + result);
				}
				else if (result > 9 && result < 100)
				{
					print_double(result);
				}
				else
				{
					print_tripple(result);
				}

				if (col != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
