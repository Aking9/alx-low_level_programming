#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line, to stdout
 * @s: string to print
 * Return: (0)
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		putchar(*s++);
	}
		putchar('\n');
}
