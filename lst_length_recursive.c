#include "liblst.h"

int	lst_length_recursive(t_list *lst)
{
	if (!lst)
		return (0);
	return (1 + lst_length_recursive(lst->next));
}
