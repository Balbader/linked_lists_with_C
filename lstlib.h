#ifndef LSTLIB_H
# define LSTLIB_H
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}				t_list;

void	ft_print_list(t_list *lst);
t_list	*ft_insert_at_head(t_list *lst, int new_value);
t_list	*ft_insert_at_tail(t_list *lst, int new_value);

#endif