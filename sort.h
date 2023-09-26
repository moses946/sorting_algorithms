#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

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
  * swap - Swaps two nodes of a dlinked list
  * @left: pointer to a doubly linked list
  * @right: pointer to a doubly linked list
  *
  * Description: This function swaps two nodes of a
  * doubly linked list
  *
  */
void swap_list(listint_t *left, listint_t *right)
{
	if (left == NULL || right == NULL || left == right)
		return;
	
	left->next = right->next;
	(left->prev)->next = right;
	(right->next)->prev = left;
	right->prev = left->prev;
	left->prev = right;
	right->next = left;
}

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
int partition(int *array, size_t size, int lo, int hi);
void quicksort(int *array, size_t size, int lo, int hi);
void quick_sort(int *array, size_t size);

#endif