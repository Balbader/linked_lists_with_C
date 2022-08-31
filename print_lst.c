#include "lstlib.h"

void	ft_printlst(t_list *lst)
{
	t_list	*current;
	int		i;

	if (!lst)
		return ;
	current = lst;
	i = 0;
	while (current != NULL)
	{
		printf("t_list %d: %d\n", i, current->content);
		i++;
		current = current->next;
	}
}

int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;

	a.content = 5;
	b.content = 6;
	c.content = 7;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	ft_printlst(&a);
	return (0);
}
