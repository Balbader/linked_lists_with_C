#ifndef LSTLIB_H
# define LSTLIB_H
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}				t_list;

void	print_lst(t_list *lst);
t_list	*insert_at_head(t_list *lst, int new_value);
t_list	*insert_at_tail(t_list *lst, int new_value);
t_list	*delete_at_head(t_list *lst);
t_list	*delete_at_tail(t_list *lst);

#endif
