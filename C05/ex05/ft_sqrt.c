int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 2147395600)
		return (0);
	while (i < nb / i)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("la racine de %d est %d\n", atoi(argv[1]), ft_sqrt(atoi(argv[1])));
	return (0);
}
*/
