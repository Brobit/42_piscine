char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	(void)argc;
	printf("Voici la chaine de caractere de base :\n%s\n", argv[1]);
	printf("Voici la chaine de caractere modifer:\n%s\n", ft_strlowcase(argv[1]));
	return (0);
}
*/
