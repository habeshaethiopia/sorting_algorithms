#include "sort.h"
/**
 * insertion_sort_list - selection sorting implimentation
 * @list: the doble linked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *head, *tail;

	if (list == NULL || *list == NULL)
		return;
	head = *list;
	while (head && head->next)
	{
		if (head->n > head->next->n)
		{
			temp = head->next;
			if (head->prev)
				head->prev->next = temp;
			else
				*list = temp;
			if (temp->next)
				temp->next->prev = head;
			temp->prev = head->prev, head->next = temp->next->next;
			temp->next = head, head->prev = temp;
			print_list(*list), tail = head;
			head = head->prev;
			while (head && head->prev)
			{
				if (head->n < head->prev->n)
				{
					temp = head->prev;
					if (temp->prev)
						temp->next = head;
					else
						*list = head;
					if (head->next)
						head->next->prev = temp;
					head->prev = temp->prev, temp->next = head->next;
					head->next = temp, temp->prev = head;
					print_list(*list);
				}
				else
					break;
			}
			head = tail;
		}
		else
			head = head->next;
	}
}
