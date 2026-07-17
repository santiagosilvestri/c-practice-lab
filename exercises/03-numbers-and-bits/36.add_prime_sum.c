/*
    Assignment name  : add_prime_sum
    Expected files   : add_prime_sum.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes a positive integer as argument and displays the sum
    of all prime numbers inferior or equal to it followed by a newline.

    If the number of arguments is not 1, or the argument is not a positive number,
    display 0 followed by a newline.

	Examples:
	$ ./add_prime_sum 5
	$ 10
*/

#include <unistd.h>

void	putnbr(int n)
{
	char	c;

	if (n >= 10)
		putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sig;
	int	num;

	sig = 1;
	num = 0;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig = -sig;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sig);
}

int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;
	int	sum;

	i = 2;
	sum = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		while (i <= n)
		{
			if (is_prime(i))
				sum = sum + i;
			i++;
		}
		putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
