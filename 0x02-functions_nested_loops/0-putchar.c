#include "holberton.h"
/**
 * main - prints the string "Holberton" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char chr[] = "_putchar";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(chr[i]);
	}
	_putchar('\n');
	return (0);
}
