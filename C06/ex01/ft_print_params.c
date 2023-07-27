#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	(void)argc;
	argv++;
	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			write(1, &argv[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
