#include "liblst.h"

t_list	*delete_lst(t_list *lst)
{
	if (lst != NULL)
	{
		delete_lst(lst->next);
		free(lst);
	}
	return NULL;
}
