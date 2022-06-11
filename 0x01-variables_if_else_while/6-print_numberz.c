#include <stdio.h>
/**
 * * * main - prints all single digit numbers
 * * followed by a newline, using putchar
 * * *Return: Always 0 (success)
 *  **/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
