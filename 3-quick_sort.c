#include "sort.h"
/**
 *partition - funtion to sort the pivot
 *@array: array to sort
 *@low: lower bound
 *@high: higher bound
 *@size: array size
 *Return: position for pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int i, j, tmp, pivot;

	pivot = array[high];
	i = (low - 1);

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > pivot)
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 *quick_sort_helper - helper function to feed quicksort
 *@array: int arrat to sort
 *@low: lower bound
 *@high: upper bound
 *@size: array size
 */
void quick_sort_helper(int *array, int low, int high, size_t size)
{
	int loc;

	if (low < high)
	{
		loc = partition(array, low, high, size);
		quick_sort_helper(array, low, loc - 1, size);
		quick_sort_helper(array, loc + 1, high, size);
	}
}

/**
 *quick_sort - calling helper
 *@array: array to sort
 *@size: array size
 */
void quick_sort(int *array, size_t size)
{

	quick_sort_helper(array, 0, size - 1, size);
}
