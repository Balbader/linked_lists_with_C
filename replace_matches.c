#include "liblst.h"

void	replace_matches(t_list *lst, int value_to_find, int new_value)
{
	if (!lst)
		return ;
	if (lst != NULL)
	{
		if (lst->content == value_to_find)
			lst->content = new_value;
		replace_matches(lst->next, value_to_find, new_value);
	}
}
