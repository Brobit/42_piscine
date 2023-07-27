char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[] = "salut je sais pas qui tu est mais t'es plutot con";
	char src[] = "t'es con";

	printf("resultat de strncpy: \n%s\n", strncpy(dest, src, 4));
	printf("resultat de ft_strncpy: \n%s\n", ft_strncpy(dest, src, 4));
	return (0);
}
*/
