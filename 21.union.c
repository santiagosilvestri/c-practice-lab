/*
    Assignment name  : union
    Expected files   : union.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes two strings and displays, without doubles, the
    characters that appear in either one of the strings.

    The display will be in the order characters appear in the command line, and
    will be followed by a newline.

    If the number of arguments is not 2, the program displays a newline.
*/

#include <unistd.h>

int	already_seen(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strsch(char *str, char c)
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

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!already_seen(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (!ft_strsch(argv[1], argv[2][i])
				&& !already_seen(argv[2], argv[2][i], i))
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
