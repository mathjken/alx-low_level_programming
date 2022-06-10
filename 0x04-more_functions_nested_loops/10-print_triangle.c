#include "main.h"
/**
 * print_triangle - draws a triangle using multiple terminal lines and #'s.
 * @size: the height of the triangle.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = size; k >= i; k--)
			{
				_putchar(" ");	
			}
			for (j =1; j<=i; j++){
			_putchar('#');
			}
		}
	}
	else
		_putchar('\n');
}
