#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	(void)argc;
	printf("%d\n", ft_strlen(argv[1]));
	return (0);
}
*/
