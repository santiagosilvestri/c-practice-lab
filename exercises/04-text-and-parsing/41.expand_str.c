/*
    Assignment name  : expand_str
    Expected files   : expand_str.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes a string and displays it with exactly three spaces
    between each word, with no spaces or tabs at the beginning or the end, followed
    by a newline.

    A word is a section of string delimited either by spaces/tabs or by the
    start/end of the string.

    If the number of parameters is not 1, the program displays a newline.

    Examples:
    $ ./expand_str "  hello   world  "
    $ hello   world
*/

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	first_word;

	i = 0;
	first_word = 1;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			while (argv[1][i] && is_space(argv[1][i]))
				i++;
			if (argv[1][i] && !first_word)
				write(1, "   ", 3);
			while (argv[1][i] && !is_space(argv[1][i]))
				write(1, &argv[1][i++], 1);
			first_word = 0;
		}
	}
	write(1, "\n", 1);
	return (0);
}