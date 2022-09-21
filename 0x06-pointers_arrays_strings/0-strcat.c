#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @src: string to add
 * @dest: string to append
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0')
	{
		dest[i] = src[k];
		k++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
