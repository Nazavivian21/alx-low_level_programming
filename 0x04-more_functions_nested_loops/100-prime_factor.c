#include <stdio.h>

/**
*main - Entry point of the program.
*Description: Prints the largest prime factor of the number 612852475143.
*Return: 0 on success
*/
int main(void)
{
	long number = 612852475143;
	long max_factor = 1;
	long i = 2;

	while (i * i <= number)
	{
		if (number % i == 0)
		{
			max_factor = i;
			number /= i;
		}
		else
		{
			i++;
		}
	}

	if (number > max_factor)
	{
		max_factor = number;
	}

		printf("%ld\n", max_factor);
		return (0);
}

