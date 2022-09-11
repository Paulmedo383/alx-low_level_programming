#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)

{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}

	for (abc = 'a' ; abc <= 'z' ; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
