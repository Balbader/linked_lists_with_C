#include "liblst.h"

t_list	*delete_first_match(t_list *lst, int value_to_del, bool *is_deleted)
{
	t_list	*temp;
	t_list	*current;
	t_list	*prev;

	if (lst == NULL)
	{
		*is_deleted = false;
		return (NULL);
	}
	if (lst->content == value_to_del)
	{
		temp = lst->next;
		free(lst);
		*is_deleted = true;
		return (temp);
	}
	current = NULL;
	while (current != NULL)
	{
		if (current->content == value_to_del)
		{
			prev->next = current->next;
			free(current);
			*is_deleted = true;
			return lst;
		}
		prev = current;
		current = current->next;
	}
	*is_deleted = false;
	return lst;
}
