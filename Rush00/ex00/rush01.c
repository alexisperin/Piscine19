void ft_putchar(char c);

void rush_first_line(int x)
{
	int i;

	i = 1;
	ft_putchar('/');
	while (i < x - 1)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void rush_line(int x)
{
	int i;

	i = 1;
	ft_putchar('*');
	while (i < x - 1)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('*');
	ft_putchar('\n');
}

void rush_last_line(int x)
{
	int i;

	i = 1;
	ft_putchar('\\');
	while (i < x - 1)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('/');
	ft_putchar('\n');
}

void rush(int x, int y)
{
	int i;

	i = 1;
	if (x <= 0 || y <= 0)
		return;
	rush_first_line(x);
	while (i < y - 1)
	{
		rush_line(x);
		i++;
	}
	rush_last_line(x);
}