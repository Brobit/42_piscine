int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	printf("ft_strcmp : %d\n", ft_strcmp(argv[1], argv[2]));
	printf("strcmp : %d\n", strcmp(argv[1], argv[2]));
	return (0);
}
*/
