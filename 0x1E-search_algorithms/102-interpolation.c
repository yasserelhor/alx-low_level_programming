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
	size_t i, f, r;

	if (array == NULL)
		return (-1);

	for (f = 0, r = size - 1; r >= f;)
	{
		i = f + (((double)(r - f) / (array[r] - array[f])) * (value - array[f]));
		if (i < size)
			printf("Vafue checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Vafue checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			f = i + 1;
	}

	return (-1);
}
