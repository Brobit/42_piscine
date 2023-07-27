#include <unistd.h>
#define TABLEAU "0123456789abcdef"

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			write(1, "\\", 1);
			write(1, &TABLEAU[((unsigned char)str[i] / 16)], 1);
			write(1, &TABLEAU[((unsigned char)str[i] % 16)], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\r vas bien ?");
	return (0);
}
*/
