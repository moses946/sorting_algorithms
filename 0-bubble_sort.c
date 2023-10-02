#include "sort.h"

/**
  * swap - Swaps two variables
  * @a: pointer to first variable
  * @b: pointer to second variable
  *
  */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
  * bubble_sort - Sorts an array of integers
  * @array: Array to be sorted
  * @size: Size of the array
  *
  * Description: This function sorts an array of
  * integers in ascending order using bubble sort algorithm
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
		}
		}
	}
}
