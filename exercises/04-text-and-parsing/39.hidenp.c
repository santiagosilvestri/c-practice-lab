/*
    Assignment name  : hidenp
    Expected files   : hidenp.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program named hidenp that takes two strings and displays 1 followed by
    a newline if the first string is hidden in the second one, otherwise displays
    0 followed by a newline.

    If the number of parameters is not 2, the program displays a newline.

	Examples:
	$ ./hidenp "abc" "a1b2c3"
	$ 1
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (argv[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}