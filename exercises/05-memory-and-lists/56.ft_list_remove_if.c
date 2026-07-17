/*
    Assignment name  : ft_list_remove_if
    Expected files   : ft_list_remove_if.c
    Allowed functions: free
    --------------------------------------------------------------------------------

    Write a function called ft_list_remove_if that removes from the passed list
    any element whose data is "equal" to the reference data.

    It will be declared as follows:

    void	ft_list_remove_if(t_list **begin_list, void *data_ref,
                int (*cmp)(void *, void *));
*/

#include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(void *, void *))
{
	t_list	*current;
	t_list	*node_to_remove;

	if (!begin_list)
		return ;
	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		node_to_remove = *begin_list;
		*begin_list = (*begin_list)->next;
		free(node_to_remove);
	}
	current = *begin_list;
	while (current && current->next)
	{
		if (cmp(current->next->data, data_ref) == 0)
		{
			node_to_remove = current->next;
			current->next = current->next->next;
			free(node_to_remove);
		}
		else
			current = current->next;
	}
}