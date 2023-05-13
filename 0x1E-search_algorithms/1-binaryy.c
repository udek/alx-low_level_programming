#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index where value is located
 * else, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;

	while (left <= right)
	{
		middle = (left + right) / 2;

		if (array[middle] == value)
			return (middle);

		else if (array[middle] < value)
			left = ++middle;

		else
			right = --middle;
	}
	return (-1);
}
