int	ft_find_next_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 2)
		return (2);
	if (nb == 3)
		return (3);
	if (nb % 2 == 0)
		nb++;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			nb += 2;
			i = 1;
		}
		i += 2;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("le prochain nombre premier vaut = %d",
	ft_find_next_prime(atoi(argv[1])));
	return (0);
}
*/
