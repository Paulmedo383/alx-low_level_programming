#include "main.h"

/**
 * _isupper - check for uppercase
 *@c: character to be tested
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
