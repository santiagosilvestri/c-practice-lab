/*
    Assignment name  : sort_int_tab
    Expected files   : sort_int_tab.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write the following function:

    void	sort_int_tab(int *tab, unsigned int size);

    It must sort the array of integers in ascending order.

	Examples:
	{3, -1, 2} -> {-1, 2, 3}
*/

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				temp;

	if (size < 2)
		return ;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}