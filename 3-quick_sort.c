#include "sort.h"

/**
  * swap3 - Swaps two variables
  * @a: pointer to first variable
  * @b: pointer to second variable
  *
  */
void swap3(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
  * quick_sort - sorts an array using quicksort algorithm
  * @array: array
  * @size: size of the array
  *
  * Description: This function sorts an array in ascending order
  * using the quicksort algorithm and implementing Lomuto partiton scheme
  *
  */
void quick_sort(int *array, size_t size)
{
		if (array == NULL || size <= 2)
			return;

		quicksort(array, size,  0, size - 1);
}


/**
  * quicksort - recursive function implementing quicksort
  * @array: array to sort
  * @size: size of the array
  * @lo: index 0
  * @hi: highest index
  *
  */
void quicksort(int *array, size_t size, int lo, int hi)
{
		int pivot;

		if (lo >= hi || lo < 0)
			return;
		pivot = partition(array, size, lo, hi);
		/** Recursively sort the left and right subarrays */
		quicksort(array, size, lo, pivot - 1);
		quicksort(array, size, pivot + 1, hi);
}

/**
  * partition - Partitions array into two subarrays
  * @array: array
  * @size: size of the array
  * @lo: index 0
  * @hi: highest index
  *
  * Return: index of the pivot
  */
int partition(int *array, size_t size, int lo, int hi)
{
		int i, j, pivot;

		i = lo - 1;
		pivot = array[hi];
		for (j = lo; j <= hi - 1; j++)
		{
			if (array[j] <= pivot)
			{
				i++;
				if (i != j)
				{
					swap3(&array[j], &array[i]);
					print_array(array, size);
				}

			}
		}
		i++;
		if (i != hi)
		{
			swap3(&array[i], &array[hi]);
			print_array(array, size);
		}
		return (i);
}
