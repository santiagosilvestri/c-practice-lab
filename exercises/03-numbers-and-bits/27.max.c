/*
    Assignment name  : max
    Expected files   : max.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write the following function:

    int	max(int *tab, unsigned int len);

    The first parameter is an array of integers.
    The second parameter is the number of elements in the array.

    The function must return the largest number found in the array.

    If len is 0, the function must return 0.

	Examples:
	max({-7, -2, -10}, 3) -> -2
*/

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max_value;

	i = 0;
	if (len == 0)
		return (0);
	max_value = tab[i];
	i++;
	while (i < len)
	{
		if (tab[i] > max_value)
			max_value = tab[i];
		i++;
	}
	return (max_value);
}