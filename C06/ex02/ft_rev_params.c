#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	while (--argc)
	{
		write(1, argv[argc], ft_strlen(argv[argc]));
		write(1, "\n", 1);
	}
	return (0);
}
