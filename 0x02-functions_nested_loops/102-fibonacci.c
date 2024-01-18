#include <stdio.h>
/**
 * main - a function name
 * Description: It shoud print out the first 20 fibonacci numbers
 * Return: an integer
 */
int main(void)
{
	int first, second, current, i;
	
	first = 0;
	second = 1;
	current = first + second;
	printf("%d", current);

	for (i = 0; i <= 50; i++)
	{
		first = second;
		second = current;
		current = first + second;
		printf("%d", current);
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
