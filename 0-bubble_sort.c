#include "sort.h"

/**
 * bubble_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)

{
	size_t i;
	int tmp;

	for (i = 0; i < size; i++)
	{
		while (array[i] > array[i + 1] && array != NULL)
		{
			tmp = array[i];
			array[i] = array[i + 1];
			tmp = array[i + 1];

			if (tmp != array[size] && tmp != array[0])
			{
				print_array(array, size);
			}
		}

		if (array == NULL)

		{
			break;
		}
	}
}
