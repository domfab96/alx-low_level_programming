#include "main.h"

/**
 * _puts - Prints a string
 * @str: the string to print
 * Return: void
 */

void _puts(const char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
