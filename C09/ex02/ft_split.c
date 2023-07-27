#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (c == *charset)
			return (0);
		charset++;
	}
	return (1);
}

int	ft_count_malloc(char *mem_str, char *charset)
{
	int	count;

	count = 0;
	while (*mem_str != '\0')
	{
		while (ft_is_charset(*mem_str, charset) == 1 && *mem_str != '\0')
			mem_str++;
		while (ft_is_charset(*mem_str, charset) == 0 && *mem_str != '\0')
			mem_str++;
		count++;
	}
	return (count);
}

void	ft_malloc_res(char **res, char *str, char *charset)
{
	char	*mem_str;
	int		count;
	int		i;

	i = 0;
	mem_str = str;
	while (*mem_str != '\0')
	{
		count = 0;
		while (ft_is_charset(*mem_str, charset) == 1 && *mem_str != '\0')
		{
			count++;
			mem_str++;
		}
		res[i++] = (char *)malloc((count + 1) * sizeof(char));
		while (ft_is_charset(*mem_str, charset) == 0 && *mem_str != '\0')
			mem_str++;
	}
}

void	ft_fill_res(char **res, char *str, char *charset)
{
	char	*mem_str;
	int		j;
	int		i;

	i = 0;
	mem_str = str;
	while (*mem_str != '\0')
	{
		j = 0;
		while (ft_is_charset(*mem_str, charset) == 1 && *mem_str != '\0')
		{
			res[i][j++] = *mem_str;
			mem_str++;
		}
		res[i][++j] = '\0';
		while (ft_is_charset(*mem_str, charset) == 0 && *mem_str != '\0')
			mem_str++;
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		count_malloc;

	while (ft_is_charset(*str, charset) == 0)
		str++;
	count_malloc = ft_count_malloc(str, charset);
	res = (char **)malloc((count_malloc + 1) * sizeof(char *));
	res[count_malloc] = 0;
	ft_malloc_res(res, str, charset);
	ft_fill_res(res, str, charset);
	return (res);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char **tab;
	int	i;
	if (argc != 3)
			return (1);
	argc--;
	argv++;
	i = 0;
	tab = ft_split(argv[0], argv[1]);
	while (tab[i] != 0) {
			printf("%s\n", tab[i++]);
	}
	return (0);
}
*/
