void	ft_putchar(char c);

void	ft_line_bottom(int x)
{
	int	i;

	i = 2;
	ft_putchar('\\');
	while (i++ < x)
		ft_putchar('*');
	if (x > 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	ft_middle_block(int x)
{
	int	i;

	i = 2;
	ft_putchar('*');
	while (i++ < x)
		ft_putchar(' ');
	if (x > 1)
		ft_putchar('*');
	ft_putchar('\n');
}

void	ft_line_top(int x)
{
	int	i;

	i = 2;
	ft_putchar('/');
	while (i++ < x)
		ft_putchar('*');
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0 && x <= 2147483647 && y <= 2147483647)
	{
		ft_line_top(x);
		while (y > 2)
		{
			ft_middle_block(x);
			y--;
		}
		if (y > 1)
			ft_line_bottom(x);
	}
}
