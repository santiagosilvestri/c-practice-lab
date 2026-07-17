/*
    Assignment name  : lcm
    Expected files   : lcm.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write a function who takes two unsigned int as parameters and returns the
    computed LCM of those parameters.

    LCM means Lowest Common Multiple.

    If at least one integer is null, LCM is equal to 0.

    Your function must be declared as follows:

    unsigned int	lcm(unsigned int a, unsigned int b);

	Examples:
	lcm(4, 6) -> 12
*/

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	result;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		result = a;
	else
		result = b;
	while (!(result % a == 0) || !(result % b == 0))
		result++;
	return (result);
}
