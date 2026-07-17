/*
    Assignment name  : rev_wstr
    Expected files   : rev_wstr.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes a string as a parameter, and prints its words in
    reverse order.

    A "word" is a part of the string delimited by spaces/tabs, or by the start/end
    of the string.

    If the number of parameters is not 1, the program displays a newline.

    In the output, the words must be separated by a single space.

    The output must end with a newline.

	Examples:
	$ ./rev_wstr "hello from C"
	$ C from hello
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
	int	start;
	int	finish_word;
	int	first_word;

	i = 0;
	first_word = 1;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			while (i >= 0 && is_space(argv[1][i]))
				i--;
			if (i >= 0)
			{
				finish_word = i;
				while (i >= 0 && !is_space(argv[1][i]))
					i--;
				start = i + 1;
				if (first_word == 0)
					write(1, " ", 1);
				while (start <= finish_word)
				{
					write(1, &argv[1][start], 1);
					start++;
				}
				first_word = 0;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}