#include "sort.h"

/**
  * swap - Swaps two nodes of a dlinked list
  * @node_1: pointer to a doubly linked list
  * @node_2: pointer to a doubly linked list
  *
  * Description: This function swaps two nodes of a
  * doubly linked list
  *
  */
void swap_list(listint_t *node_1, listint_t *node_2)
{
	listint_t *node_0, *node_3;

	if (!node_1 || !node_2)
		return;
	
	node_0 = node_1->prev;
	node_3 = node_2->next;
	/**move node_2*/
	node_2->prev = node_0;
	node_2->next = node_1;
	/**move node_1*/
	node_1->prev = node_2;
	node_1->next = node_3;
	/**change pointers for node_0 and node_3 if they exist*/
	if (node_0)
		node_0->next = node_2;
	if (node_3)
		node_3->prev = node_1;
}

/**
  * print_list - Prints a list of integers
  *
  * @list: The list to be printed
  */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
