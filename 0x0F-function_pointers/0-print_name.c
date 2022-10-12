#include <main.h>
/**
 * print_name - print name of the function
 * @name: name of person
 * @p: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
