#include "sort.h"

/**
 * bubble_sort - the function
 * @array: the array of number ready to be sorted
 * @size: the siz of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	for (i = size - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
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

