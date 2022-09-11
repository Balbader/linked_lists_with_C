#include "liblst.h"

void	delete_dup(t_list *lst)
{
	t_list	*current_1;
	t_list	*current_2;
	t_list	*duplicate;

	if (lst == NULL)
		return ;
	if (lst->next == NULL)
		return ;
	current_1 = lst;
	while (current_1 != NULL && current_1->next != NULL)
	{
		current_2 = current_1;
		while (current_2->next != NULL)
		{
			if (current_1->content == current_2->next->content)
			{
				duplicate = current_2->next;
				current_2->next = current_2->next->next;
				free(duplicate);
			}
			current_2 = current_2->next;
		}
		current_1 = current_1->next;
	}
}
