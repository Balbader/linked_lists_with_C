#include "liblst.h"

t_list	*delete_at_tail(t_list *lst)
{
	if (!lst)
		return (NULL);
	else if (lst->next == NULL)
	{
		free(lst);
		return (NULL);
	}
	else
	{
		t_list	*current;
		t_list	*prev;

		current = lst;
		prev = NULL;
		while (current->next != NULL)
		{
			prev = current;
			current = current->next;
		}
		prev->next = NULL;
		free(current);
		return (lst);
	}
}
