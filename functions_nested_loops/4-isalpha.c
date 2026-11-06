#include "main.h"

/**
 * _isalpha - function that check if a character is a letter.
 * @c: The character to check
 *
 * Return: If lowercase 1
 *         Else 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
