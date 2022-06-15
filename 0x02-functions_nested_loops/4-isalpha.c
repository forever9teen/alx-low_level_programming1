#include "main.h"
/**
 * * *  _isalpha -  a function that checks for alphabetic character.
 * * @c: a character of lowercase or uppercase
 * * *Return: returns 1 if c is a letter, lowercase or uppercase. returns 0 otherwise
 *  **/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
