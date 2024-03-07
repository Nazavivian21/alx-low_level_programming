#include <stdio.h>
#include "main.h"

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
			}
		}
	}
}

