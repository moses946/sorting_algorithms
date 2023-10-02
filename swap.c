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