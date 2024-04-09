#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 * using interpolation search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, s, f;

	if (array == NULL)
		return (-1);

	for (s = 0, f = size - 1; f >= s;)
	{
		i = s + (((double)(f - s) / (array[f] - array[s])) * (value - array[s]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			f = i - 1;
		else
			s = i + 1;
	}

	return (-1);
}
