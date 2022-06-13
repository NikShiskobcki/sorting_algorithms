#include "sort.h"

/**
 * insertion_sort_list - insertion sort
 * @list: list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux = *list;
	listint_t *aux2, *aux3;

	while (aux != NULL)
	{
		aux2 = aux->prev;
		while (aux2 != NULL && aux->n < aux2->n)
		{
			aux3 = aux2->prev;
			swap(aux, aux2, list);
			aux2 = aux3;
			print_list(*list);
		}
		aux = aux->next;
	}
}

/**
 * swap - swap
 * @actual: actual
 * @previous: prev
 * @list: list
 */
void swap(listint_t *actual, listint_t *previous, listint_t **list)
{
	listint_t *Naux, *PPAux;

	Naux = actual->next;
	PPAux = previous->prev;
	actual->next = previous;
	previous->next = Naux;
	actual->prev = previous->prev;
	if (Naux != NULL)
		Naux->prev = previous;
	if (PPAux != NULL)
	{
		previous->prev->next = actual;
		previous->prev = actual;
	}
	else
		*list = actual;
	if (actual->prev == NULL)
		*list = actual;

}
