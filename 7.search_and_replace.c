/*
    Assignment name  : search_and_replace
    Expected files   : search_and_replace.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program called search_and_replace that takes 3 arguments.

    The first argument is a string.
    The second argument is a character to search for.
    The third argument is a character to replace it with.

    If the number of arguments is not 3, the program displays a newline.

    If the second or third argument is not exactly one character, the program
    displays a newline.

    Otherwise, the program displays the first string, replacing every occurrence
    of the second argument with the third argument, followed by a newline.
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				write(1, &argv[3][0], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
