#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int char)
{
	if (char >= 97 && char <= 122)
		return (1);
	else
		return (0);
}
