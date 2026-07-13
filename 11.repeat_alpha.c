/*
    Assignment name  : repeat_alpha
    Expected files   : repeat_alpha.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program called repeat_alpha that takes a string and displays it,
    repeating each alphabetical character as many times as its alphabetical index.

    'a' becomes 'a'
    'b' becomes 'bb'
    'c' becomes 'ccc'
    ...
    'z' becomes 'zzzzzzzzzzzzzzzzzzzzzzzzzz'

    The same rule applies to uppercase letters.

    Other characters must be displayed only once.

    The result must be followed by a newline.

    If the number of arguments is not 1, the program displays a newline.
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	repeat;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				repeat = argv[1][i] - 'a' + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				repeat = argv[1][i] - 'A' + 1;
			else
				repeat = 1;
			while (repeat > 0)
			{
				write(1, &argv[1][i], 1);
				repeat--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}