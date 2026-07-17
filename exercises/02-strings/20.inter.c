/*
    Assignment name  : inter
    Expected files   : inter.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes two strings and displays, without doubles, the
    characters that appear in both strings, in the order they appear in the first
    one.

    The display will be followed by a newline.

    If the number of arguments is not 2, the program displays a newline.

	Examples:
	$ ./inter "abcabc" "bcd"
	$ bc
*/

#include <unistd.h>

int	sch(char *str, char c)
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

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (sch(argv[2], argv[1][i]) && !already_seen(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}