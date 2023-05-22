/**
 * bubble_sort - Function that implements a bubble sort algorithm
 *
 * @array: the array we need to sort
 * @size: the size of the array
 *
 * Return: Returns nothing
 */

#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i, check = 0;
	int temp;

	if (size == 1)
	{
		return;
	}
	else if (size == 0)
		return;

	while (check != 1)
	{
		for (i = 0; i < size; i++)
		{
			if (i == size - 1)
				continue;

			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		for (i = 0; i < size; i++)
		{
			if (i == (size - 1))
				check = 1;
			if (array[i] > array[i + 1])
				break;
		}
	}
}
