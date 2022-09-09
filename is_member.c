#include "liblst.h"

bool	is_member(t_list *lst, int value_to_find)
{
	if (!lst)
		return (false);
	else if (lst->content == value_to_find)
		return (true);
	return (is_member(lst->next, value_to_find));
}
