int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] < 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "efwujfiwjfdiwikfi";

	ft_str_is_printable(str);
	return (0);
}
*/
