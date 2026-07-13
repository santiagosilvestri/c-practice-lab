/*
    Assignment name  : reverse_bits
    Expected files   : reverse_bits.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write a function that takes a byte, reverses it bit by bit, and returns the
    result.

    Your function must be declared as follows:

    unsigned char	reverse_bits(unsigned char octet);
*/

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	mask;

	mask = 128;
	while (mask > 0)
	{
		if (octet & mask)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		mask = mask / 2;
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	unsigned char	mask_in;
	unsigned char	mask_out;

	res = 0;
	mask_in = 1;
	mask_out = 128;
	while (mask_in > 0)
	{
		if (octet & mask_in)
			res = res | mask_out;
		mask_in = mask_in * 2;
		mask_out = mask_out / 2;
	}
	return (res);
}

int	main(void)
{
	unsigned char	n;
	unsigned char	r;

	n = 5;
	r = reverse_bits(n);
	print_bits(n);
	write(1, "\n", 1);
	print_bits(r);
	write(1, "\n", 1);
	return (0);
}

