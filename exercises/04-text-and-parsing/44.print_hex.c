/*
    Assignment name  : print_hex
    Expected files   : print_hex.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes a positive or null number expressed in base 10,
    and displays it in base 16, followed by a newline.

    If the number of parameters is not 1, the program displays a newline.

	Examples:
	$ ./print_hex 42
	$ 2a
*/

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num);
}

void	ft_hexa(int n)
{
	char	base[] = "0123456789abcdef";

	if (n >= 16)
		ft_hexa(n / 16);
	write(1, &base[n % 16], 1);
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		ft_hexa(n);
	}
	write(1, "\n", 1);
	return (0);
}
