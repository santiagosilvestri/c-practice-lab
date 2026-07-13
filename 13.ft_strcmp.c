/*
    Assignment name  : ft_strcmp
    Expected files   : ft_strcmp.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Reproduce the behavior of the function strcmp.

    Your function must be declared as follows:

    int	ft_strcmp(char *s1, char *s2);
*/

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s2[i])
    {
        if(s1[i] != s2[i])
            return((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;    
    }
    return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* 
V2

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

*/