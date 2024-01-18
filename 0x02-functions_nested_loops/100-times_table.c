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
/**
 * print_double - a function that prints numbers
 * Description: It prints double numbers
 * @num: an integer that stores numbers
 * Return: void
 */
void print_double(int num)
{
	int left, right;

	_putchar(' ');
	_putchar(' ');
	left = num / 10;
	right = num % 10;
	_putchar('0' + left);
	_putchar('0' + right);
}
/**
 * print_tripple - a function that prints numbers
 * Decription: It prints tripple numbers
 * @res: an integer that stores values
 * Return: void
 */
void print_tripple(int res)
{
	int left, l_left, r_left, right;

	_putchar(' ');
	left = res / 10;
	l_left = left / 10;
	r_left = left % 10;
	right = res % 10;
	_putchar('0' + l_left);
	_putchar('0' + r_left);
	_putchar('0' + right);
}
