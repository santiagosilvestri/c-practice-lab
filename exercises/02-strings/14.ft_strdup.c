/*
    Assignment name  : ft_strdup
    Expected files   : ft_strdup.c
    Allowed functions: malloc
    --------------------------------------------------------------------------------

    Reproduce the behavior of the function strdup.

    Your function must be declared as follows:

    char	*ft_strdup(char *src);
*/

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}