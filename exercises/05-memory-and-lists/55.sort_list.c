/*
    Assignment name  : sort_list
    Expected files   : sort_list.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write the following function:

    t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

    It must sort the list according to the ascending order defined by the function
    pointed to by cmp.

    Duplicates must remain.

    You must sort the list by swapping the values of the nodes, not by changing
    their links.
*/

typedef struct s_list
{
	int			data;
	struct s_list	*next;
}	t_list;

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*current;
	int		tmp;

	current = lst;
	while (current && current->next)
	{
		if (!cmp(current->data, current->next->data))
		{
			tmp = current->data;
			current->data = current->next->data;
			current->next->data = tmp;
			current = lst;
		}
		else
			current = current->next;
	}
	return (lst);
}
