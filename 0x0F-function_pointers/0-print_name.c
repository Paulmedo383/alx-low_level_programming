#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: pointer to the function print
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
