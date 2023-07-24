#include "sort.h"
/**
 * selection_sort - implimentation of selection sort
 * @array: the list
 * @size: the size
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, temp, j;
	int index;

	for (i = 0; i < size; i++)
	{

		for (j = i; j < size; j++)
			if (array[i] > array[j])
				index = j;
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
		print_array(array, size);
	}
}
