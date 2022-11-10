#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 1 or 0.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		/**
		 * atoi: Convert a string to its numeric(integr) value
		 * library : stdlib.h
		 * Declaration : int atoi(const char *string);
		 * parameters: The string to convert
		 * return value: numerical value
		 */

		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	}

	return (0);
}
