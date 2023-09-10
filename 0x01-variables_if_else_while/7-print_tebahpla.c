#include <stdio.h>

/**
 * main - print the alphabetic
 * Return: Always 0 (Success)
 */

int main(void)

{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0);

}
