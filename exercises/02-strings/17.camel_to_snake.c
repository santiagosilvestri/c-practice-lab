/*
    Assignment name  : camel_to_snake
    Expected files   : camel_to_snake.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes a single string in lowerCamelCase format and
    converts it into snake_case.

    A lowerCamelCase string is a string where each word begins with a capital
    letter except for the first one.

    If the number of arguments is not 1, the program displays a newline.

	Examples:
	$ ./camel_to_snake "helloWorldFromC"
	$ hello_world_from_c
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
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				write(1, "_", 1);
				c = argv[1][i] + 32;
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