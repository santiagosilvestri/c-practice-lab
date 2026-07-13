/*
	Assignment name  : ft_swap
	Expected files   : ft_swap.c
	Allowed functions: None
	--------------------------------------------------------------------------------

	Write a function that swaps the contents of two integers whose addresses are
	given as parameters.

	Your function must be declared as follows:

	void	ft_swap(int *a, int *b);
 */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
