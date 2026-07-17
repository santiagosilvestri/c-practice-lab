/*
    Assignment name  : ft_atoi_base
    Expected files   : ft_atoi_base.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write a function that converts the initial portion of the string pointed to
    by str to an int representation.

    str is in a specific base given as a second parameter.

    The base can contain:
    0123456789abcdef

    The function must be declared as follows:

    int	ft_atoi_base(const char *str, int str_base);
*/

int	get_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;
	int	digit;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		digit = get_digit(str[i]);
		if (digit < 0 || digit >= str_base)
			break ;
		result = result * str_base + digit;
		i++;
	}
	return (result * sign);
}
