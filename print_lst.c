#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}				t_list;

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
		printf("t_list %d: %d\n", i, current->value);
		i++;
		current = current->next;
	}
}

int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;

	a.value = 5;
	b.value = 6;
	c.value = 7;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	ft_printlst(&a);
	return (0);
}
