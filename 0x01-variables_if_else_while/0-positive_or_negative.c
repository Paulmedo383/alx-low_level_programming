#include <stdio.h>
#inclde <time.h>
#include <stdlib.h>

/**
 *main - print whether the number stored in the variable n is positive or negative
 *
 * Return: 0
 */
int main (void)
{
	int n;
	strand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	if (n>0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0); 
