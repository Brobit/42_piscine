unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (src[j])
		j++;
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

/*
#include <stdio.h>
int	main(void)
{
	char dest[100];
	char *src;

	src = "boule et bill";
	printf("%d\n", ft_strlcpy(dest, src, 5));
	return (0);
}
*/
