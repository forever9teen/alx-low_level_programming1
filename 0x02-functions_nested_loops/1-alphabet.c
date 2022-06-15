#include "main.h"
/**
 * * * main -  a function that prints the alphabet, in lowercase,
 * * followed by anewline
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
