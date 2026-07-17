/*
    Assignment name  : ft_range
    Expected files   : ft_range.c
    Allowed functions: malloc
    --------------------------------------------------------------------------------

    Write the following function:

    int	*ft_range(int start, int end);

    It must allocate, with malloc(), an array of integers and fill it with
    consecutive values that begin at start and end at end, including start and end.

    Then it must return a pointer to the first value of the array.

	Examples:
	ft_range(3, 6) -> {3, 4, 5, 6}
	ft_range(3, 0) -> {3, 2, 1, 0}
*/

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*tab;
	int	size;
	int	step;
	int	i;

	if (start <= end)
	{
		size = end - start + 1;
		step = 1;
	}
	else
	{
		size = start - end + 1;
		step = -1;
	}
	tab = malloc(sizeof(*tab) * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = start;
		start = start + step;
		i++;
	} // no hace falta cerrar el string
	return (tab);
}

/*
#include<stdio.h>

int	main(void)
{
	int	*tab;
	int	size;
	int	i;

	tab = ft_range(1, -5);
	size = 7;
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	free(tab);
	return (0);
}

*/
