#include "search_algos.h"

/**
 * linear_search - function that searches for
 * an element in an array
 *
 * @array: Pointer to the first element of the array
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}
