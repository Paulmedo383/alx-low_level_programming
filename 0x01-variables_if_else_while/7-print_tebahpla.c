#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)

{
	int abc;

	for (abc = 'z' ; abc >= 'a' ; abc--)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
