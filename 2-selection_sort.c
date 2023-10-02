#include "sort.h"

/**
  * swap2 - Swaps two variables
  * @a: pointer to first variable
  * @b: pointer to second variable
  *
  */
void swap2(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
  * selection_sort - Sorts an array of integers
  * @array: Array
  * @size: size of the array
  *
  * Description: Sorts an array of integers in
  * ascending order using selection sort algorithm
  */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j;
	int min;

	for (; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if ((unsigned long) min != i)
		{
			swap2(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
