#include "liblst.h"

int	main(void)
{
	t_list	*list1_head;

	list1_head = NULL;
	list1_head = insert_at_head(list1_head, 7);
	list1_head = insert_at_head(list1_head, 8);
	list1_head = insert_at_head(list1_head, 9);
	list1_head = insert_at_tail(list1_head, 7);
	list1_head = insert_at_tail(list1_head, 8);
	list1_head = insert_at_tail(list1_head, 9);
	print_lst(list1_head);
	return (0);
}
