/*
    Assignment name  : ft_rrange
    Expected files   : ft_rrange.c
    Allowed functions: malloc
    --------------------------------------------------------------------------------

    Write the following function:

    int	*ft_rrange(int start, int end);

    It must allocate, with malloc(), an array of integers and fill it with
    consecutive values that begin at end and end at start, including both.

    Then it must return a pointer to the first value of the array.

	Examples:
	ft_rrange(3, 6) -> {6, 5, 4, 3}
	ft_rrange(3, 0) -> {0, 1, 2, 3}
*/

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	size;
	int	step;
	int	i;

	i = 0;
	if (end >= start)
	{
		size = end - start + 1;
		step = -1;
	}
	else
	{
		size = start - end + 1;
		step = 1;
	}
	tab = malloc(sizeof(*tab) * size);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = end;
		end = end + step;
		i++;
	}
	return (tab);
}
