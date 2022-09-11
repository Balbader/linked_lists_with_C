#include "liblst.h"

t_list	*insert_at_head(t_list *lst, int new_value)
{
	t_list *new_node;

	new_node = NULL;
	if (lst == NULL)
		return (new_node);
	new_node = calloc(1, sizeof(t_list));
	new_node->content = new_value;
	(*new_node).content = new_value;
	new_node->next = lst;
	return (new_node);
}
