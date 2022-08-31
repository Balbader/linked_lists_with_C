#include "liblst.h"

t_list	*insert_at_tail(t_list *lst, int new_value)
{
	t_list	*new_node;
	t_list	*current;

	if (lst == NULL)
		return (new_node);
	new_node = calloc(1, sizeof(t_list));
	new_node->content = new_value;
	current = lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (lst);
}
