#include "liblst.h"

int	count_matches(t_list *lst, int value_to_find)
{
	if (!lst)
		return (0);
	else if (lst->content == value_to_find)
		return (1 + count_matches(lst->next, value_to_find));
	else
		return (count_matches(lst->next, value_to_find));
}
