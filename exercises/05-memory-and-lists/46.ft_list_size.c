/*
    Assignment name  : ft_list_size
    Expected files   : ft_list_size.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write a function that returns the number of elements in the linked list
    passed to it.

    It must be declared as follows:

    int	ft_list_size(t_list *begin_list);
*/

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list != NULL)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}