#include "lstlib.h"

void	print_lst(t_list *lst)
{
	t_list	*current;
	int		i;

	if (!lst)
		return ;
	current = lst;
	i = 0;
	while (current != NULL)
	{
		printf("t_list %d: %d\n", i, current->content);
		i++;
		current = current->next;
	}
}
