#include "sort.h"
/**
* selection_sort - Sorts an array of integers in ascending order.
* @array: Pointer to the array to be sorted.
* @size: The number of elemnts in the array.
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
			{
				index = j;
			}
		}
		if (index != i)
		{
			tmp = array[i];
			array[i] = array[index];
			array[index] = tmp;
			print_array(array, size);
		}
	}
}
