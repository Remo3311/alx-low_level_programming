#include "main.h"

/**
 * _strpbrk - searches string for set of bytes
 *
 * @s: string to check
 * @accept: substring of chars
 *
 * Return: pointer to first occurance
 */

char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;

	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}
	return (0);
}
