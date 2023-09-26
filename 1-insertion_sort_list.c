#include "sort.h"

/**
  * insertion_sort_list - Sorts a dlinked list
  * @list: doubly linked list
  *
  * Description: This function sorts a doubly linked
  * list in ascending order using the insertion sort algorithm
  *
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous;

	current = *list->next;
	while (current)
	{
		previous = current->prev;
		while (previous && previous->n > current->n)
		{
			swap_list(previous, current);
			previous = previous->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
