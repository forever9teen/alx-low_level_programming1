#include <stdio.h>
/**
* * * main - prints all possible combinations of two two-digit numbers.
* * followed by anewline
* * * Return: Always 0 (success)
* **/
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n =48; n<= 57; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);
				if (ch != 56 || n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
