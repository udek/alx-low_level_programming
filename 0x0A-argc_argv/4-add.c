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
	/**
	 * strtol()
	 * long int strtol(const char *str, char **endptr, int base)
	 * This function returns the converted integral number as a
	 * long int value, else zero value is returned.
	 * int main () {
	 * char str[30] = "2030300 This is test";
	 * char *ptr;
	 * long ret;
	 * ret = strtol(str, &ptr, 10);
	 * printf("The number(unsigned long integer) is %ld\n", ret);
	 * printf("String part is |%s|", ptr);
	 * return(0);
	 * }
	 */

	int result;
	int i;
	char *ptr;
	int num;

	result = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &ptr, 10);
			if (!*ptr)
				result += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", result);
	return (0);

}
