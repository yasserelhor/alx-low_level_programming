#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */

int leap_search(int *array, size_t size, int value)
{
	size_t i, leap, stride;

	if (array == NULL || size == 0)
		return (-1);

	stride = sqrt(size);
	for (i = leap = 0; leap < size && array[leap] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", leap, array[leap]);
		i = leap;
		leap += stride;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, leap);

	leap = leap < size - 1 ? leap : size - 1;
	for (; i < leap && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
