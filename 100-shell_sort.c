#include "sort.h"
/**
 * shell_sort - implimentation of shell sort
 *
 * @array: the varibles
 * @size: the varibles
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;
	int temp, f;

	for (gap = 1; gap < size; gap = (gap * 3) + 1)
	{
	}
	for (; gap > 0; gap /= 3)
	{
		f = 0;
		for (i = gap; i < size; i++)
		{
			j = i;
			temp = array[i];
			while ((j >= gap) && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j = j - gap;
			}
			array[j] = temp;
			f = 1;
		}
		if (f == 1)
			print_array(array, size);
	}
}
