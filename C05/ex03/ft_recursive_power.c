int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d puissance %d vaut %d", atoi(argv[1]), atoi(argv[2]),
	ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
*/
