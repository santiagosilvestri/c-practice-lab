/*
    Assignment name  : tab_mult
    Expected files   : tab_mult.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that displays a number's multiplication table.

    The parameter will always be a strictly positive number that fits in an int,
    and said number times 9 will also fit in an int.

    If there are no parameters, the program displays a newline.

	Examples:
	$ ./tab_mult 3
	$ 1 x 3 = 3
	$ ...
	$ 9 x 3 = 27
*/

#include <unistd.h>

int	ft_atoisimple(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

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
	int	i;
	int	n;

	i = 1;
	if (argc == 2)
	{
		n = ft_atoisimple(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
