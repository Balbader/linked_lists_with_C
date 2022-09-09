#include "liblst.h"

t_list	*delete_all_matches(t_list *lst, int value_to_del, int *num_deleted)
{
	t_list	*current;
	bool	deleted;

	*num_deleted = 0;
	current = lst;
	deleted = false;
	while (deleted)
	{
		current = delete_first_match(current, value_to_del, &deleted);
		if (deleted)
			*num_deleted += 1;
	}
	return (current);
}
