#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *scr)
{
	int i;

	for (i = 0; scr[i] != '\0'; i++)
	{
		dest[i] = scr[i];
	}
	dest[i++] = '\0';
	return (dest);
}
