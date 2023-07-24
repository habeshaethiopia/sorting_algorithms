#include "sort.h"
/**
 * selection_sort - implimentation of selection sort
 * @array: the list
 * @size: the size
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int index, temp;

	for (i = 0; i < size - 1; i++)
	{
		temp = array[i];
		for (j = i + 1; j < size; j++)
			if (temp > array[j])
			{
				temp = array[j];
				index = j;
			}
		if (array[i] > array[index])
		{
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
	}
}
