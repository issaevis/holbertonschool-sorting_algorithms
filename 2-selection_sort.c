#include "sort.h"

/**
 * selection_sort - implentation of the selection sort algorithm
 * @array: array to be sorted
 * @size: length of array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx, flag = 0;
	int tmp = 0;

	for (i = 0; i < size; i++)
	{
		tmp = array[i];
		flag = 0;
		for (j = i + 1; j < size; j++)
		{
			if (tmp > array[j])
			{
				flag = 1;
				tmp = array[j];
				idx = j;
			}
		}
		if (flag == 1)
		{
			array[idx] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
