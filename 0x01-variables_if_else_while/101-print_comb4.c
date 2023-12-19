#include <stdio.h>

/**
 * main - Program entry point.
 *
 * Description: Should print all possible different combinations of three digits.
 * Return: Zero on success and Non-zero on failure.
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = i + 1; j <= '8'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (!(i == '7' && j == '8' && k == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
