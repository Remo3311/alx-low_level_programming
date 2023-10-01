#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	int ntr = 0;

	if (*s != '\0')
	{
		ntr += _strlen_recursion(s + 1) + 1;
	}
	return (ntr);
}
