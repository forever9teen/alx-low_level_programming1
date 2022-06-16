#include "main.h"
/**
 * * * times_table - prints the 9 times table
 * starting with 0.
 * **/
void times_table(void)
{
	int y;
	int b;
	int c;

	for (y = 0; y < 10; y++)
	{
		for (b = 0; b < 10; b++)
		{
			c = y * b;
			if (b == 0)
				_putchar(c + '0');
			if (b != 0 && c < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		} 
		_putchar('\n');
	}
}
