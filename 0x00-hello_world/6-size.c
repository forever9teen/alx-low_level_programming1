#include <stdio.h>
/**
 *  * * Main - Entry Point 
 *  * *
 *  *  *Return: Always 0 (success)
 *   **/
int main()
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of float:  %zu bytes\n", sizeof(floatType));
	printf("size of double: %zu bytes\n", sizeof(doubleType));
	print("size of char: %zu byte\n", sizeof(charType));
	return (0);
}
