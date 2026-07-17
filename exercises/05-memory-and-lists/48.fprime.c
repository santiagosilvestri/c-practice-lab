/*
    Assignment name  : fprime
    Expected files   : fprime.c
    Allowed functions: printf, atoi
    --------------------------------------------------------------------------------

    Write a program that takes a positive int and displays its prime factors on
    the standard output, followed by a newline.

    Factors must be displayed in ascending order and separated by '*', so that
    the expression displayed gives the right result.

    If the number of parameters is not 1, simply display a newline.

    The input, when there is one, will be valid.

	Examples:
	$ ./fprime 42
	$ 2*3*7
*/

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n;
	int	divisor;
	int	first;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		divisor = 2;
		first = 1;
		if (n == 1)
			printf("1");
		while (n > 1)
		{
			if (n % divisor == 0)
			{
				if (!first)
					printf("*");
				printf("%d", divisor);
				first = 0;
				n = n / divisor;
			}
			else
				divisor++;
		}
	}
	printf("\n");
	return (0);
}
