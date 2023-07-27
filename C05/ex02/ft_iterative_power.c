int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- > 1)
		res *= nb;
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d puissance %d vaut : %d", atoi(argv[1]), atoi(argv[2]),
	ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
*/
