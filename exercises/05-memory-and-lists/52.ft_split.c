/*
    Assignment name  : ft_split
    Expected files   : ft_split.c
    Allowed functions: malloc
    --------------------------------------------------------------------------------

    Write a function that takes a string, splits it into words, and returns them
    as a NULL-terminated array of strings.

    A word is a part of the string delimited by spaces, tabs, newlines, or by the
    start/end of the string.

    Your function must be declared as follows:

    char	**ft_split(char *str);
*/

#include <stdlib.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	*copy_word(char *str, int len)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_space(str[i]))
			i++;
	}
	return (count);
}

    char	**ft_split(char *str)
    {
        int		i;
        int		k;
        int		words;
        int		start;
        char	**out;

        words = count_words(str);
        out = malloc(sizeof(*out) * (words + 1));
        if (!out)
            return (NULL);
        i = 0;
        k = 0;
        while (str[i])
        {
            while (str[i] && is_space(str[i]))
                i++;
            start = i;
            while (str[i] && !is_space(str[i]))
                i++;
            if (i > start)
            {
                out[k] = copy_word(&str[start], i - start);
                if (!out[k])
                    return (NULL);
                k++;
            }
        }
        out[k] = NULL;
        return (out);
    }

/*
    #include <stdio.h>

    int	main(void)
    {
        char **tab;
        int i;

        tab = ft_split("    Hola    mundo   42");
        i = 0;
        while(tab[i])
        {
            printf("%s\n", tab[i]);
            i++;
        }
        return(0);
    }
*/