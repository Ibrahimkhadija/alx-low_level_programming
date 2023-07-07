#include "main.h"
/**
<<<<<<< HEAD
 * print_size - Prints a triangle of squares according to parameter
=======
 * print_triangle - prints a triangle of squares according to parameter
>>>>>>> f8080de4e3125bab37662ff2fad57b5aa9826210
 * @size: The size of the squares triangle
 * Return: empty
 */
void print_triangle(int size)
{
	int x, y, z;

<<<<<<< HEAD
	if (size <= 0)
=======
	if (size == 0)
>>>>>>> f8080de4e3125bab37662ff2fad57b5aa9826210
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
<<<<<<< HEAD
			for (y = size - x; y > 1; y--)
=======
			for (y = size - x; y--)
>>>>>>> f8080de4e3125bab37662ff2fad57b5aa9826210
			{
				_putchar(32);
			}
			for (z = 0; z <= x; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
