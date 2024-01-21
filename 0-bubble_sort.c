#include "sort.h"

/**
 * bubble_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)

{
	size_t i, count = 0;
	int tmp;

	while (size + count > 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				count++;
				print_array(array, size);
			}
		}
		count--;
	}
}
