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
  * print_array - Prints an array of integers
  *
  * @array: The array to be printed
  * @size: Number of elements in @array
  */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
