/*
    Assignment name  : rotone
    Expected files   : rotone.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes a string and displays it, replacing each of its
    letters by the next one in alphabetical order.

    'z' becomes 'a' and 'Z' becomes 'A'.

    Other characters must stay unchanged.

    The result must be followed by a newline.

    If the number of arguments is not 1, the program displays a newline.

    Examples:
    $ ./rotone "abc xyz"
    $ bcd yza
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    char c;

    i = 0;
    if(argc == 2)
    {
        while(argv[1][i])
        {
            if((argv[1][i] >= 'a' && argv[1][i] <= 'z')||(argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
            {
                if((argv[1][i] == 'z')||(argv[1][i] == 'Z'))
                {
                    c = argv[1][i] - 25;
                    write(1, &c, 1);
                }
                else
                {
                    c = argv[1][i] + 1;
                    write(1, &c, 1);
                }
            }
            else 
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}