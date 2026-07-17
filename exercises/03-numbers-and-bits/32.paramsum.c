/*
    Assignment name  : paramsum
    Expected files   : paramsum.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that displays the number of arguments passed to it, followed
    by a newline.

    If there are no arguments, display 0 followed by a newline.

	Examples:
	$ ./paramsum one two three
	$ 3
*/

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}