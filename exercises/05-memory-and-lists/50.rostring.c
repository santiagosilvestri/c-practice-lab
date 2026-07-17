/*
    Assignment name  : rostring
    Expected files   : rostring.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes a string and displays this string after rotating it
    one word to the left.

    The first word becomes the last one.

    Words are separated by spaces or tabs.

    The output must be followed by a newline.

    If the number of arguments is not 1, the program displays a newline.

	Examples:
	$ ./rostring "hello from C"
	$ from C hello
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
	int	end;
	int	printed;

	i = 0;
	printed = 0;
	if (argc == 2)
	{
		while (argv[1][i] && is_space(argv[1][i]))
			i++;
		start = i;
		while (argv[1][i] && !is_space(argv[1][i]))
			i++;
		end = i;
		while (argv[1][i])
		{
			while (argv[1][i] && is_space(argv[1][i]))
				i++;
			if (argv[1][i])
			{
				if (printed)
					write(1, " ", 1);
				while (argv[1][i] && !is_space(argv[1][i]))
				{
					write(1, &argv[1][i], 1);
					i++;
				}
				printed = 1;
			}
		}
		if (start < end)
		{
			if (printed)
				write(1, " ", 1);
			while (start < end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}