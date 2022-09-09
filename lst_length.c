#include "liblst.h"

int	lst_length(t_list *lst)
{
	int		length;
	t_list	*current;

	if (!lst)
		return (0);
	length = 0;
	current = lst;
	while (current != NULL)
	{
		length++;
		current = current-> next;
	}
	return (length);
}
