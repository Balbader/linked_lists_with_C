#include "liblst.h"

t_list	*insert_after(t_list *lst, int new_val, int after_val)
{
	t_list	*new_lst;
	t_list	*current;

	new_lst = calloc(1, sizeof(t_list));
	new_lst->content = new_val;
	if (lst == NULL)
		return (new_lst);
	current = lst;
	while (current->next != NULL)
	{
		if (current->content == after_val)
		{
			new_lst->next = current->next;
			current->next = new_lst;
			return (lst);
		}
		current = current->next;
	}
	new_lst->next = current->next;
	current->next = new_lst;
	return (lst);
}
