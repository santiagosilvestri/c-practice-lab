/*
    Assignment name  : ft_list_foreach
    Expected files   : ft_list_foreach.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write a function that takes a list and a function pointer, and applies the
    function to the data of each element of the list.

    It must be declared as follows:

    void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
*/

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}
