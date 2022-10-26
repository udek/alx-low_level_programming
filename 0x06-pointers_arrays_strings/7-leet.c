#include "main.h"

/**
* leet -> a leet function
* @x: param x
* Return: a string
*/
char *leet(char *x)
{
	int a = 0, b, l = 5;
	char enc[5] = {'A', 'E', 'O', 'T', 'L'};
	char enc1[5] = {'4', '3', '0', '7', '1'};

	while (x[a])
	{
		b = 0;

		while (b < l)
		{
			if (x[a] == enc[b] || x[a] - 32 == enc[b])
				x[a] = enc1[b];
			b++;
		}
		a++;
	}
	return (x);
}
