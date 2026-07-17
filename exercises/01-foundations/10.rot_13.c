/*
    Assignment name  : rot_13
    Expected files   : rot_13.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes a string and displays it, replacing each of its
    letters by the letter 13 spaces ahead in alphabetical order.

    'z' and 'Z' wrap around to the beginning of the alphabet.

    Other characters must stay unchanged.

    The result must be followed by a newline.

    If the number of arguments is not 1, the program displays a newline.

	Examples:
	$ ./rot_13 "abc xyz"
	$ nop klm
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
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z')
				|| (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				if ((argv[1][i] >= 'a' && argv[1][i] <= 'm')
					|| (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
				{
					c = argv[1][i] + 13;
					write(1, &c, 1);
				}
				else
				{
					c = argv[1][i] - 13;
					write(1, &c, 1);
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}