/*
    Assignment name  : print_bits
    Expected files   : print_bits.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a function that takes a byte, and prints it in binary without a newline
    at the end.

    Your function must be declared as follows:

    void	print_bits(unsigned char octet);
*/

#include <unistd.h>

void print_bits(unsigned char octet)
{
    int mask = 128;

    while(mask > 0)
    {
        if (octet & mask)
        	write(1, "1", 1);
        else
	        write(1, "0", 1);
        mask = mask / 2;
    }
}

int main(void)
{
    print_bits(5);
    return(0);
}