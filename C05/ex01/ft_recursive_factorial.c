int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("la factorielle de %d vaut %d\n", atoi(argv[1]),
	ft_recursive_factorial(atoi(argv[1])));
	return (0);
}
*/
