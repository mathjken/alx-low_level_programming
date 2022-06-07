#include "main.h"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char chr[] = "_putchar";
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(chr[i]);
	}
	_putchar('\n');
	return (0);
}
