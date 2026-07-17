/*
    Assignment name  : snake_to_camel
    Expected files   : snake_to_camel.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes a single string in snake_case format and converts
    it into lowerCamelCase.

    A snake_case string is a string where each word is separated by an underscore.

    If the number of arguments is not 1, the program displays a newline.

	Examples:
	$ ./snake_to_camel "hello_world_from_c"
	$ helloWorldFromC
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
			if (argv[1][i] == '_')
			{
				i++;
				if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				{
					c = argv[1][i] - 32;
					write(1, &c, 1);
				}
				else if (argv[1][i])
					write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}