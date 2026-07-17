/*
    Assignment name  : flood_fill
    Expected files   : flood_fill.c
    Allowed functions: None
    --------------------------------------------------------------------------------

    Write a function that takes a char **tab, a t_point size,
    a t_point begin and fills the zone connected to begin with the
    character 'F'.

    A zone is composed of the same character that is present at begin.

    The function prototype is:

    void flood_fill(char **tab, t_point size, t_point begin);
*/

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

static void	fill(char **tab, t_point size, int x, int y, char target)
{
	if (x < 0 || y < 0 || x >= size.x || y >= size.y)
		return ;
	if (tab[y][x] != target)
		return ;
	tab[y][x] = 'F';
	fill(tab, size, x + 1, y, target);
	fill(tab, size, x - 1, y, target);
	fill(tab, size, x, y + 1, target);
	fill(tab, size, x, y - 1, target);
}
void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	target;

	if (!tab || begin.x < 0 || begin.y < 0
		|| begin.x >= size.x || begin.y >= size.y)
		return ;
	target = tab[begin.y][begin.x];
	if (target == 'F')
		return ;
	fill(tab, size, begin.x, begin.y, target);
}
