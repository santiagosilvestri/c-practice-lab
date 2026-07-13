/*
    Assignment name  : fizzbuzz
    Expected files   : fizzbuzz.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that prints the numbers from 1 to 100, each separated by a
    newline.

    If the number is a multiple of 3, print "fizz" instead of the number.

    If the number is a multiple of 5, print "buzz" instead of the number.

    If the number is a multiple of both 3 and 5, print "fizzbuzz" instead of the
    number.

    Example:

    1
    2
    fizz
    4
    buzz
    fizz
    7
    8
    fizz
    buzz
    11
    fizz
    13
    14
    fizzbuzz
    ...
*/

#include <unistd.h>

static void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if (nbr % 3 == 0)
			write(1, "fizz", 4);
		if (nbr % 5 == 0)
			write(1, "buzz", 4);
		if (nbr % 3 != 0 && nbr % 5 != 0)
			ft_putnbr(nbr);
		write(1, "\n", 1);
		nbr++;
	}
	return (0);
}