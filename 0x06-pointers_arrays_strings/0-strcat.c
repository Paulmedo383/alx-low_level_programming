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
	int j;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
