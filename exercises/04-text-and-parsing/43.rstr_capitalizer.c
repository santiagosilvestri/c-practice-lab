/*
    Assignment name  : rstr_capitalizer
    Expected files   : rstr_capitalizer.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes one or several strings and, for each argument,
    capitalizes the last character of each word and converts the rest of the word
    to lowercase.

    A word is a section of string delimited by spaces, tabs, or the beginning/end
    of the string.

    Each argument must be followed by a newline.

    If there are no arguments, the program displays a newline.

	Examples:
	$ ./rstr_capitalizer "a FiRSt LiTTlE TESt"
	$ A firsT littlE tesT
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
	int		i;
	int		j;
	char	c;

	if (argc == 1)
		write(1, "\n", 1);
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			c = argv[j][i];
			if (c >= 'A' && c <= 'Z')
				c = c + 32;
			if ((argv[j][i + 1] == '\0'
					|| is_space(argv[j][i + 1]))
				&& c >= 'a' && c <= 'z')
				c = c - 32;
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}