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

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;

	result = 0;
	if (octet & 1)
		result = result | 128;
	if (octet & 2)
		result = result | 64;
	if (octet & 4)
		result = result | 32;
	if (octet & 8)
		result = result | 16;
	if (octet & 16)
		result = result | 8;
	if (octet & 32)
		result = result | 4;
	if (octet & 64)
		result = result | 2;
	if (octet & 128)
		result = result | 1;
	return (result);
}
/*
V2
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				bits;

	result = 0;
	bits = 8;
	while (bits > 0)
	{
		result = (result << 1) | (octet & 1);
		octet = octet >> 1;
		bits--;
	}
	return (result);
}
*/