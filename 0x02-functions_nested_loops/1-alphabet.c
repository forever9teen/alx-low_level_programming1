#include "main.h"
/**
 * * * print_alphabet - prints the alphabet, in lowercase,
 * * followed by a newline
 * * *Return: Always 0 (success)
 * **/
void print_alphabet(void)
{
	int b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
