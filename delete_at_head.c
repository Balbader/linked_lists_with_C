#include "liblst.h"

t_list	*delete_at_head(t_list *lst)
{
	if (!lst)
		return (NULL);
	t_list	*to_return;

	to_return = lst->next;
	free(lst);
	return (to_return);
}
