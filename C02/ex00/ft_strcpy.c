char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char dest[] = "deidjeijdwed";
	char src[] = "boule et bill";

	printf ("%s\n",ft_strcpy(dest, src));
	return (0);
}
*/
