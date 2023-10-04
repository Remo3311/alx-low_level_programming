#include <stdio.h>
#include "main.h"
/**
 * main - prints its name
 * @argc: argumet count
 * @argv: argument vector
 *
 * return: always zero
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
