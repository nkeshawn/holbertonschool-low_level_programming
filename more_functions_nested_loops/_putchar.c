#include <unistd.h>

/**
 * _putchar - writes the character c to standard output i.e. 1 (1st arg).
 * @c: The character to print
 *
 * Return: On success 1 (only 1 byte is written)
 *         On error -1, errno is set to indicate the error.
 *         (https://man7.org/linux/man-pages/man2/write.2.html)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
