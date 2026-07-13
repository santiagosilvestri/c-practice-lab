/*
    Assignment name  : ft_atoi
    Expected files   : ft_atoi.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write a function that converts the string argument str to an integer.

    The function must be declared as follows:

    int	ft_atoi(const char *str);
*/

int ft_atoi(const char *str)
{
    int i;
    int sig;
    int num;

    sig = 1;
    num = 0;
    i = 0;
    while((str[i] >= 9 && str[i] <= 13)||str[i] == ' ')
        i++;
    if(str[i] == '+'||str[i] == '-')
    {
        if(str[i] == '-')
            sig= - sig;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    return(num * sig);
}
