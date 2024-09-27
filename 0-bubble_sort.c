#include "sort.h"

/**
 * bubble_sort - a function that sorts a set of integers
 * @array: The array to be sorted
 * @size: The number of elements
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
