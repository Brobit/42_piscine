#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
				ft_putchar('1');
				ft_putchar('2');
				ft_putchar('3');
				ft_putchar('4');
				ft_putchar('5');
				return(0);
}
*/
