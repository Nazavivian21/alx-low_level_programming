#include <stdio.h>
/**
 * print_buffer - Prints a buffer in a specified format.
 * @b: Pointer to the buffer.
 * @size: The size of the buffer.
 *
 * Return: None.
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2 != 0)
				putchar(' ');
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];

				if (c >= 32 && c <= 126)
					putchar(c);
				else
					putchar('.');
			}
		}

		putchar('\n');
	}
}
