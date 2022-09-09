#include <stdio.h>

/**
 * main -entry
 * Return: 0 when priting the functiom
 */

int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(S)\n", sizeof(int));
	printf("size of a long int: %zu byte(S)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("siz of a float: %zu byte(s)\n", sizeof(float));
return(0);
}
