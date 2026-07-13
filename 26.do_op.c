/*
    Assignment name  : do_op
    Expected files   : do_op.c
    Allowed functions: atoi, printf
    --------------------------------------------------------------------------------

    Write a program that takes three strings:
    - The first and the third one are representations of base-10 signed integers.
    - The second one is an arithmetic operator chosen from: + - * / %

    The program must display the result of the requested arithmetic operation,
    followed by a newline.

    If the number of parameters is not 3, the program displays nothing.
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int a;
    int b;

    if(argc == 4)
    {
        a = atoi(argv[1]);
        b = atoi(argv[3]);
        if(argv[2][0] == '+')
            printf("%d", a+b);
        else if(argv[2][0] == '-')
            printf("%d", a-b);
        else if(argv[2][0] == '*')
            printf("%d", a*b);
        else if(argv[2][0] == '/')
            printf("%d", a/b);
        else if(argv[2][0] == '%')
            printf("%d", a%b);
        printf("\n");
    }
    return(0);
}