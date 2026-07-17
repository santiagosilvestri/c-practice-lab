/*
    Assignment name  : ft_strrev
    Expected files   : ft_strrev.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write a function that reverses a string in place.

    It must return its parameter.

    Your function must be declared as follows:

    char	*ft_strrev(char *str);

    Examples:
    ft_strrev("hello") -> "olleh"
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		tmp = str[start];       //ft_swap pero con caracteres dentro de un string
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
	return (str);
}

/*
#include <unistd.h>

int	main(int argc, char **argv)
{
    int i;

    i = 0;
    if(argc == 2)
    {
        ft_strrev(argv[1]);
        while(argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
*/