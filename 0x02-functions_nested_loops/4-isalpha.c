#include "main.h"
/**
 * * *  _isalpha -  a function that checks for alphabetic character.
 * * @c: a charactwr of lowercase or uppercase
 * * *Return: returns 1 if c is a letter
 * Return: returns  0 otherwise
 *  **/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
}
