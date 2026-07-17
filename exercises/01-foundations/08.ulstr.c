/*
    Assignment name  : ulstr
    Expected files   : ulstr.c
    Allowed functions: write
    --------------------------------------------------------------------------------

    Write a program that takes a string and reverses the case of all its letters.

    Other characters remain unchanged.

    You must display the result followed by a newline.

    If the number of arguments is not 1, the program displays a newline.

    Examples:
    $ ./ulstr "Hello 42!"
    $ hELLO 42!
*/

#include<unistd.h>

int main(int argc, char **argv)
{
    int i;
    char c;

    i = 0;
    if(argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i]>= 'a' && argv[1][i]<= 'z')
            {
                c = argv[1][i] - 32;
                write(1, &c, 1);
            }
            else if (argv[1][i]>= 'A' && argv[1][i]<= 'Z')
            {
                c = argv[1][i] + 32;
                write(1, &c, 1);
            }
            else
                 write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}