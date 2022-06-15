#include "main.h"
/**
 * * * print_alphabet_x10 - that prints 10 times the alphabet, in lowercase
 * * Folowed by a new line
 * *Return:Always 0 (success)
 * **/
void print_alphabet_x10(void)
{
	int r;
	int w;

	for (r = 1; r <= 10; r++)
	{
		for (w = 'a'; w <= 'z'; w++)
		{
			_putchar(w);
		}
		_putchar('\n');
	}
}
