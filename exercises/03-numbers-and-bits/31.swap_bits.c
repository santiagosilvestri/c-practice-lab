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

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

/*
Another way to see it

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	right;
	unsigned char	left;

	right = octet >> 4;
	left = octet << 4;
	return (right | left);
}
*/
