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

	if (!(*list))
		return;
	current = (*list)->next;
	while (current)
	{
		previous = current->prev;
		while (previous)
		{
			if (current->n < previous->n)
			{
				swap_list(previous, current);
				if (!current->prev)
					*list = current;
				print_list(*list);
				previous = current->prev;
			}
			else{
				previous = previous->prev;
			}
		}
		current = current->next;
	}
}
