#include <unistd.h>

void	ft_write(int x)
{
	char	c;

	c = (x / 10) + '0';
	write(1, &c, 1);
	c = (x % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_write(i);
			write(1, " ", 1);
			ft_write(j);
			if (i != 98 || j != 99)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
