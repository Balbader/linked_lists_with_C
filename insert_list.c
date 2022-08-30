#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}				t_list;

void	ft_print_list(t_list *lst)
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

t_list	*ft_insert_at_head(t_list *lst, int new_value)
{
	t_list *new_node = calloc(1, sizeof(t_list));
	new_node->content = new_value;
}

int	main(void)
{
	return (0);
}
