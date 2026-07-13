/*
    Assignment name  : alpha_mirror
    Expected files   : alpha_mirror.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program called alpha_mirror that takes a string and displays this
    string after replacing each alphabetical character by the opposite alphabetical
    character.

    'a' becomes 'z'
    'b' becomes 'y'
    'c' becomes 'x'
    ...
    'z' becomes 'a'

    'A' becomes 'Z'
    'B' becomes 'Y'
    'C' becomes 'X'
    ...
    'Z' becomes 'A'

    Other characters remain unchanged.

    The result must be followed by a newline.

    If the number of arguments is not 1, the program displays a newline.
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				c = 'z' - (argv[1][i] - 'a');
				write(1, &c, 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				c = 'Z' - (argv[1][i] - 'A');
				write(1, &c, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
