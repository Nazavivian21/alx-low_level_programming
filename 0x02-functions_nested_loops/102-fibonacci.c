#include <stdio.h>
/**
 * main - a function name
 * Description: It shoud print out the first 20 fibonacci numbers
 * Return: an integer
 */
int main(void)
{
	unsigned long int first;
	unsigned long int second;
	unsigned long int current;
	int i;
	first = 1;
	second = 2;
	current = first + second;

	printf("%lu, ", first);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", second);
		current = first + second;
		first = second;
		second = current;
		if (i != 49)

		{
			printf("  ");
		}
	}
		printf("\n");
		return (0);
}
