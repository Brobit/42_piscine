int	ft_iterative_factorial(int nb)
{
	int	count;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	count = nb;
	while (count > 1)
		nb *= --count;
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("la factorielle de %d est %d", atoi(argv[1]) ,
	ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
*/
