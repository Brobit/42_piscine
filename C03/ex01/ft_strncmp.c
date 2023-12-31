int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n - 1 && (s1[i] == s2[i]) && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int     main(int argc, char **argv)
{
	(void)argc;
        printf("ft_strncmp : %d\n", ft_strncmp(argv[1], argv[2], 8));
        printf("strncmp : %d\n", strncmp(argv[1], argv[2], 8));
        return (0);
}
*/
