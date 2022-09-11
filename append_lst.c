#include "liblst.h"

t_list	*append_lst(t_list *lst1, t_list *lst2)
{
	t_list	*current;

	if (lst1 == NULL)
		return (NULL);
	current = lst1;
	while (current->next != NULL)
		current = current->next;
	current->next = lst2;
	return lst1;
}
