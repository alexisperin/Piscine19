int duplicate(int **map, int *pos)
{
	int i;

	i = 0;
	while (i < pos[0])
	{
		if (map[i][pos[1]] == map[pos[0]][pos[1]])
			return (1);
		i++;
	}
	i = 0;
	while (i < pos[1])
	{
		if (map[pos[0]][i] == map[pos[0]][pos[1]])
			return (1);
		i++;
	}
	return (0);
}

void get_col_views(int **map, int **curr_views, int col)
{
	int i;
	int j;
	int view;

	i = 1;
	view = 1;
	while (i < 4)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (map[j][col] < map[i][col])
		}
	}
}

int *get_views(int **map, int **curr_views)
{
	int i;

	i = 0;
	while (i < 4)
	{
		get_col_views(map, curr_views, i);
		get_row_views(map, curr_views, i);
		i++;
	}
	return (*curr_views);
}

int		solved(int **map, int *views)
{
	int *curr_views;
	int i;

	curr_views = malloc(16 * sizeof(int));
	if (curr_views == 0)
		return (0);
	curr_views = get_views(map, &curr_views);
	i = 0;
	while (i < 16 && curr_views[i] == views[i])
		i++;
	if (i == 16)
		return (1);
	return (0;)
}
