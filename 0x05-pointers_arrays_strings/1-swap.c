#include "main.h"
/**
 * swap_int - Entry point
 *
 * @a: give a value
 * @b: give another value
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
