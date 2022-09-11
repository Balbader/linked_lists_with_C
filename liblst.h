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
int		lst_length(t_list *lst);
int		lst_length_recursive(t_list *lst);
bool	is_member(t_list *lst, int value_to_find);
int		count_matches(t_list *lst, int value_to_find);
void	replace_matches(t_list *lst, int value_to_find, int new_value);
t_list	*delete_first_match(t_list *lst, int value_to_del, bool *is_deleted);
t_list	*delete_all_matches(t_list *lst, int value_to_del, int *num_deleted);
t_list	*efficient_del_match(t_list *lst, int value_to_del, int *num_deleted);
t_list	*append_lst(t_list *lst1, t_list *lst2);
t_list	*reverse_lst(t_list *lst);
void	sort_lst(t_list *lst);
void	delete_dup(t_list *lst);
t_list	*delete_lst(t_list *lst);
t_list	*insert_after(t_list *lst, int new_val, int after_val);

#endif
