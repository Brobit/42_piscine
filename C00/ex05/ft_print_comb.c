#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first != '7' && second != '8' && third != '9')
	{
		second = first + 1;
		while (second != '9')
		{
			third = second + 1;
			while (third != ':')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
				write(1, ", ", 2);
				third++;
			}
			second++;
		}
		first++;
	}
	write(1, "789", 3);
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
