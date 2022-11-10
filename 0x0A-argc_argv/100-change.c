#include <stdio.h>
#include <stdlib.h>

/**
 * main- Program that prints the minimun number of coins to make change.
 * @argc: Integer
 * @argv: Character
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/**
	 * Find the minimum number of coins to change the amount of money
	 * passed by argument
	 * If 10 passes, a single dime is needed = 1
	 * for 100, 4 quarters(100/25) = 4
	 * 101, 4 quarters and one penny(101/4) = 5
	 * for 13
	 * a one cent coin =3
	 */

	int change;
	int coins;

	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	while (change > 0)
	{
		if (change >= 25)
			change = change - 25;
		else if (change >= 10)
			change = change - 10;
		else if (change >= 5)
			change = change - 5;
		else if (change >= 2)
			change = change - 2;
		else
			change = change - 1;
		coins++;
	}
	printf("%i\n", coins);
	return (0);
}
