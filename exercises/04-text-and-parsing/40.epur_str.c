/*
    Assignment name  : epur_str
    Expected files   : epur_str.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes a string, and displays this string with exactly one
    space between words, with no spaces or tabs either at the beginning or the end,
    followed by a newline.

    A "word" is defined as a part of a string delimited either by spaces/tabs, or
    by the start/end of the string.

    If the number of arguments is not 1, or if there are no words to display, the
    program displays a newline.

	Examples:
	$ ./epur_str "  hello   world  "
	$ hello world
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
				write(1, " ", 1);
			while (argv[1][i] && !is_space(argv[1][i]))
				write(1, &argv[1][i++], 1);
			first_word = 0;
		}
	}
	write(1, "\n", 1);
	return (0);
}