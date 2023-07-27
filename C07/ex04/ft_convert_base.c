/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 07:23:04 by almarico          #+#    #+#             */
/*   Updated: 2023/07/27 12:47:38 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_strlen(char *base);
int				ft_check_base(char *base);
int				ft_is_in_base(char c, char *base);
int				ft_size_nb(int nb, int size_base);
unsigned int	ft_cstr(char c, char *base);

char	*ft_putnbr_base(int nbr, char *base)
{
	int		size_base;
	int		size_nb;
	int		i;
	long	nb;
	char	*tab;

	tab = NULL;
	nb = nbr;
	size_base = ft_strlen(base);
	size_nb = ft_size_nb(nb, size_base);
	tab = (char *)malloc((size_nb + (nb < 0) + 1) * sizeof(char));
	tab[size_nb + (nb < 0) + 1] = '\0';
	i = (nb < 0);
	if (nb < 0)
	{
		nb *= -1;
		tab[0] = '-';
	}
	size_nb -= !i;
	while (nb >= 0 && size_nb >= i)
	{
		tab[size_nb--] = base[nb % size_base];
		nb /= size_base;
	}
	return (tab);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	neg;
	int	i;

	i = 0;
	res = 0;
	neg = 1;
	if (ft_check_base(base) == 1)
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_is_in_base(str[i], base) == 0 && str[i])
	{
		res *= ft_strlen(base);
		res += ft_cstr(str[i], base);
		i++;
	}
	return (res * neg);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		res_atoi_base;
	char	*res_putnbr_base;

	if (ft_check_base(base_from) == 1 || ft_check_base(base_to) == 1)
		return (NULL);
	res_putnbr_base = NULL;
	res_atoi_base = ft_atoi_base(nbr, base_from);
	res_putnbr_base = ft_putnbr_base(res_atoi_base, base_to);
	return (res_putnbr_base);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*tab;

	if (argc != 4)
		return (1);
	argc--;
	argv++;
	tab = ft_convert_base(argv[0], argv[1], argv[2]);
	printf("%s", tab);
	free(tab);
	return (0);
}
*/
