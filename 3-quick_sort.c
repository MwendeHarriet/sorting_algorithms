#include "sort.h"

/**
* quick_sort - Sorts an array of integers in ascending order.
* @array: The array to be sorted.
* @size: The size of the array.
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_helper(array, 0, size - 1,);
}

/**
* quick_sort_helper -Helps the quick_sort algorithm.
* @array: Array to be sorted.
* @low: Starting index of the partition.
* @high: Ending index of the partition.
* @size: Size of the array.
*/
void quick_sort_helper(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		quick_sort_helper(array, low, pivot - 1, size);
		quick_sort_helper(array, pivot + 1, high, size);
	}
}

/**
* lomuto_partition -Implements the algorithm scheme.
* @array: Array to be partitioned.
* @low: Starting index of the partition.
* @high: Ending index of the partition.
* @size: Size of the array.
* Return: Index of the pivot's final postion.
*/
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}

/**
* swap - Swaps two integers.
* @x: First integer.
* @y: Second integer.
*/
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
