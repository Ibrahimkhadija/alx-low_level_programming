#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		dest[i] = i;
	}
	dest[i++] = '\0';
	return (dest);
}
