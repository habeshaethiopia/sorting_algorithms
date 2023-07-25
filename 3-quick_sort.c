#include "sort.h"
/**
 * quick_sort - the implementation of quick_sort
 * @arr: the array
 * @n: the size of the array
 */
void quick_sort(int *arr, size_t n)
{
	sort_q(arr, 0, n - 1, n);
}
void sort_q(int *arr, int l, int h, size_t n)
{
	int pivot;
	if (l < h)
	{
		pivot = partition(arr, l, h, n);
		sort_q(arr, l, pivot - 1, n);
		sort_q(arr, pivot + 1, h, n);
	}
}
/**
 * partition - the function to partion the array and sort
 * @h: is the highest index
 * @l: the lowest index
 * @arr: the array
 * Return: the index of partion
 */
int partition(int *arr, int l, int h, size_t n)
{
	int temp, pivot = arr[h];
	int i = l - 1, j;

	for (j = l; i < h; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				print_array(arr, n);
			}
		}
	}
	if (i + 1 != h)
	{
		temp = arr[i + 1];
		arr[i + 1] = arr[h];
		arr[h] = temp;
		print_array(arr, n);
	}
	return (i + 1);
}
