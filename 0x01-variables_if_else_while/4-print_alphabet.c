#include <stdio.h>

/**
 * main - print the alphabetic
 * Return: Always 0 (Success)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'd'; c++)
	for (c = 'f'; c <= 'p'; c++)
	for (c = 'r'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);

}
