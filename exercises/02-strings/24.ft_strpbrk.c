/*
    Assignment name  : ft_strpbrk
    Expected files   : ft_strpbrk.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Reproduce the behavior of the function strpbrk.

    The function should be prototyped as follows:

    char	*ft_strpbrk(const char *s1, const char *s2);

	Examples:
	ft_strpbrk("abcdef", "xdy") -> pointer to "def"
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

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (ft_sch(s2, s1[i]))
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}