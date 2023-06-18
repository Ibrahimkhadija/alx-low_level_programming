#include <stdio.h>
/**
 * main - prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
<<<<<<< HEAD
		putchar(i);
=======
		putchar(i)
>>>>>>> 453dadd13bc1505857079ce5d2450a2015c1141c
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
