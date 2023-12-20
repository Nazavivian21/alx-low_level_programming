#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer.
 * @h: a variable that serves as the hour
 * @m: a variable that serves as the minute
 * Description:  Does the stuff
 * Return: void
 */
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
