#include "liblst.h"

void	sort_lst(t_list *lst)
{
	bool	swapped;
	t_list	*current;
	t_list	*prev;
	int		temp;

	swapped = false;
	if (lst == NULL)
		return ;
	if (lst->next == NULL)
		return ;
	do
	{
		swapped = false;
		current = lst;
		prev = NULL;
		while (current->next != NULL)
		{
			prev = current;
			current = current->next;
			if (current != NULL)
			{
				if (current->content < prev->content)
				{
					temp = prev->content;
					prev->content = current->content;
					current->content = temp;
					swapped = true;
				}
			}
		}
	} while (swapped);
}
