/*
    Assignment name  : last_word
    Expected files   : last_word.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes a string and displays its last word followed by a
    newline.

    A word is a section of string delimited by spaces/tabs or by the start/end of
    the string.

    If the number of parameters is not 1, or if there are no words, display a
    newline.

	Examples:
	$ ./last_word "hello from C   "
	$ C
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	end;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		while (i > 0 && (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
			i--;
		end = i;
		while (i > 0 && argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t')
			i--;
		while (i < end)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}