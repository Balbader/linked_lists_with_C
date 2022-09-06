#include "liblst.h"

t_list	*delete_at_head(t_list *lst)
{
	t_list	*to_return;

	if (!lst)
		return (NULL);
	to_return = lst->next;
	free(lst);
	return (to_return);
}
