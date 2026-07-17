/*
    Assignment name  : pgcd
    Expected files   : pgcd.c
    Allowed functions: printf
    --------------------------------------------------------------------------------

    Write a program that takes two strings representing two strictly positive
    integers that fit in an int.

    Display their highest common denominator followed by a newline.

    If the number of parameters is not 2, display a newline.

	Examples:
	$ ./pgcd 920 414
	$ 46
*/

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	num = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (argc == 3)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[2]);
		while (i <= a && i <= b)
		{
			if ((a % i) == 0 && (b % i) == 0)
				result = i;
			i++;
		}
		printf("%d", result);
	}
	printf("\n");
	return (0);
}