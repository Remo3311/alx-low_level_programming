#include "main.h"

/**
*more_numbers - print 10 times the numbers
*
*
*/

void more_numbers(void)
{
	int a;
	int b;
	int c;

	for (b = 0; b <= 9; b++)
	{
		for (c = 0; c <= 14; c++)
		{
		a = c;
		if (c > 9)
		{
			_putchar(1 + 48);
			a = c % 10;
		}
		_putchar(a + 48);
		}
		_putchar('\n');
	}
}
