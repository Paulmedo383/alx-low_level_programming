#include <stdio.h>

/**
 * main - Entry
 * Return: 0 when priting the functiom
 */

int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %d byte(s)\n", sizeof(c));
	printf("size of an int: %d byte(S)\n", sizeof(i));
	printf("size of a long int: %d byte(S)\n", sizeof(li));
	printf("size of a long long int: %d byte(s)\n", sizeof(lli));
	printf("siz of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
