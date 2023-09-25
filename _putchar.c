#include "main.h"

/**
 * _putchar - function to print 1 char.
 *
 * @c: char to be printed.
 *
 * Return: 1 for success.
 */
int _putchar(int c)
{
        return (write(STDOUT_FILENO, &c, 1));
}

