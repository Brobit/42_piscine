#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*range;
	int		i;
	long	diff;

	if (min >= max)
		return (NULL);
	diff = max - min;
	range = (int *)malloc(diff * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = -1;
	while (++i < diff)
		range[i] = min++;
	return (range);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*range;
	int	i;

	(void)argc;
	printf("range contient : \n");
	range = ft_range(atoi(argv[1]), atoi(argv[2]));
	i = -1;
	while (++i < (atoi(argv[2]) - atoi(argv[1])))
		printf("%d ", range[i]);
	printf("\n");
	return (0);
}
*/
