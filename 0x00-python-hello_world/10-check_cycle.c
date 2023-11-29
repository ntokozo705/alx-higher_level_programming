#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks the loop cycle
 * @list: The list of the cycles
 *
 * Return: 1 if success, 0 otherwise.
 */

int check_cycle(listint_t *list)
{
	listint_t *slw, *fst;

	if (list == NULL || list->next == NULL)
		return (0);
	slw = list->next;
	fst = list->next->next;

	while (slw && fst && fst->next)
	{
		if (slw == fst)
			return (1);
		slw = slw->next;
		fst = fst->next->next;
	}
	return (0);
}
