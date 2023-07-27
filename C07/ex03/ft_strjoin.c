#include <stdlib.h>

int	ft_strlen(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_strlen_strs(char **strs, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	i;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		strs_size;
	int		s_sep;

	s_sep = ft_strlen(sep);
	strs_size = ft_strlen_strs(strs, size);
	tab = malloc((strs_size + (s_sep *(size - (size > 0)) + 1)) * sizeof(char));
	if (tab == 0)
		return (NULL);
	i = 0;
	tab[0] = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		i++;
		if (i < size)
			ft_strcat(tab, sep);
	}
	return (tab);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	size;
	char	*sep;
	char	*dest;

	(void)argc;
	size = 1;
	sep = argv[1];
	argv += 2;
	printf("%s\n", dest = ft_strjoin(size, argv, sep));
	free(dest);
	return (0);
}
*/
