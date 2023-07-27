int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (1);
	while (base[i])
	{
		if ((base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (1);
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_is_in_base(char c, char *base)
{
	int	j;

	j = 0;
	while (c != base [j] && base[j])
		j++;
	if (c == base [j])
		return (0);
	return (1);
}

unsigned int	ft_cstr(char c, char *base)
{
	unsigned int	j;

	j = 0;
	while (c != base[j])
		j++;
	return (j);
}

int	ft_size_nb(int nb, int size_base)
{
	int	i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb != 0)
	{
		i++;
		nb /= size_base;
	}
	return (i);
}
