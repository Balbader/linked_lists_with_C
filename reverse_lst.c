#include "liblst.h"

t_list	*reverse_lst(t_list	*lst)
{
	t_list	*current_node;
	t_list	*next_node;
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	current_node = lst;
	next_node = lst->next;
	current_node->next = NULL;
	while (next_node != NULL)
	{
		temp = next_node->next;
		next_node->next = current_node;
		current_node = next_node;
		next_node = temp;
	}
	return (current_node);
}
