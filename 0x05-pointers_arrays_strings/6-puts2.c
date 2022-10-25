#include "main.h"
/**
 * puts2 - print strings in par position.
 * @str: variable holding the string.
 *
 * Return: Always 0 -success
 */
void puts2(char *str)
{
	int c = 0;
	int i;

	while (str[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
