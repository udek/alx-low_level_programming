#include "main.h"
/**
 * print_rev - Entry point.
 * @s: the variable
 *
 */
void print_rev(char *s)
{
	char *c = s;

	if (s)
	{
		while (*c)
		{
			c++;
		}
		while (s < c--)
		{
			_putchar(*c);
		}
		_putchar('\n');
	}
}
