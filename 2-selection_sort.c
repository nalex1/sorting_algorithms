#include "sort.h"

/**
 * selection_sort - a function to sort array elements using selection sort
 * @array: array to be sorted
 * @size: the number of elements in the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_ind;
	int temp;
	int swapped = 0;

	if (size <= 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_ind = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_ind])
			{
				min_ind = j;
				swapped = 1;
			}
		}
		temp = array[i];
		array[i] = array[min_ind];
		array[min_ind] = temp;
		if (swapped)
			print_array(array, size);
		swapped = 0;
	}
}
