#include <stdio.h>
/**
 * main - main entry point of the program
 * Description:  computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: void
 */
int main(void)
{
	int result;
	int i;

	result = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result = result + i;
		}
	}
	printf("%d\n", result);
	return (0);
}
