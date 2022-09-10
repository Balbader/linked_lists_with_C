#include "liblst.h"

t_list	*efficient_del_match(t_list *lst, int value_to_del, int *num_deleted)
{
	t_list	*current;
	t_list	*temp;
	t_list	*new_lst;

	*num_deleted = 0;
	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->content == value_to_del)
	{
		temp = current->next;
		current = current->next;
		free(temp);
		*num_deleted += 1;
		if (current == NULL)
			return (NULL);
	}
	new_lst = current;
	while (current->next != NULL)
	{
		if (current->next->content == value_to_del)
		{
			temp = current->next;
			current->next = current->next->next;
			free(temp);
			*num_deleted += 1;
		}
		current = current->next;
	}
	return (new_lst);
}
