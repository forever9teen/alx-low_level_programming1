#include <stdio.h>
/**
 * *main -  prints the alphabet in lowercase, followed by a new line.
 * * followed by anew line except q and e
 * * * Return: Always 0 (success)
 * **/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if  (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar(ch);
	return (0);
}
