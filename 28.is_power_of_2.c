/*
    Assignment name  : is_power_of_2
    Expected files   : is_power_of_2.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write a function that determines if a given number is a power of 2.

    This function returns 1 if the given number is a power of 2, otherwise it
    returns 0.

    Your function must be declared as follows:

    int	is_power_of_2(unsigned int n);
*/

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 1;
	while (i <= n)
	{
		if (i == n)
			return (1);
		i = i * 2;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", is_power_of_2(256));
	printf("%d\n", is_power_of_2(10));
	printf("%d\n", is_power_of_2(1));
	printf("%d\n", is_power_of_2(0));
	return (0);
}

/* V2
int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n = n / 2;
	if (n == 1)
		return (1);
	return (0);
}
*/