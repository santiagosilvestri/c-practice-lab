/*
    Assignment name  : swap_bits
    Expected files   : swap_bits.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write a function that takes a byte, swaps its halves, and returns the result.

    Your function must be declared as follows:

    unsigned char	swap_bits(unsigned char octet);
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

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int	main(void)
{
	unsigned char	n;
	unsigned char	r;

	n = 65;
	r = swap_bits(n);
	print_bits(n);
	write(1, "\n", 1);
	print_bits(r);
	write(1, "\n", 1);
	return (0);
}