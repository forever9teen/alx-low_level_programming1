#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * * * Main - assign a random number to the variable int n
 *  * * Prints out the value of n
 *  * * Return: Always  0 (success)
 *  **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is\n", n);
	if (n > 0)
		printf("and is greater than 5\n", n);
	if (n == 0)
		printf("and is 0\n", n);
	if (n < 6 && n !=0)
		printf("and is less than 6 and not 0\n", n);
	result (0);
}

