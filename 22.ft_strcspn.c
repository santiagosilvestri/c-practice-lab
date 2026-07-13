/*
    Assignment name  : ft_strcspn
    Expected files   : ft_strcspn.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Reproduce the behavior of the function strcspn.

    The function should be prototyped as follows:

    size_t	ft_strcspn(const char *s, const char *reject);
*/

#include <stddef.h>

int	ft_sch(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (ft_sch(reject, s[i]))
			return (i);
		i++;
	}
	return (i);
}

#include<stdio.h>

int	main(void)
{
	printf("%zu\n", ft_strcspn("abcdef", "ool"));
	return (0);
}