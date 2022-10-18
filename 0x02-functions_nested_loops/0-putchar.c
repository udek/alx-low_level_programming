#include "main.h"
/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line
 * Return: 0
 */
int main(void)
{
	char msgchar[] = "_putchar";

	int msg;

	for (msg = 0; msg <= 7; msg++)
	{
		_putchar(msgchar[msg]);
	}
	_putchar('\n');
	return (0);
}
