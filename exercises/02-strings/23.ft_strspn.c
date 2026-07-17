/*
    Assignment name  : ft_strspn
    Expected files   : ft_strspn.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Reproduce the behavior of the function strspn.

    The function should be prototyped as follows:

    size_t	ft_strspn(const char *s, const char *accept);

	Examples:
	ft_strspn("abcde", "cba") -> 3
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

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (!ft_sch(accept, s[i]))
			return (i);
		i++;
	}
	return (i);
}
