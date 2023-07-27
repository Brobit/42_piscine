/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:29:58 by almarico          #+#    #+#             */
/*   Updated: 2023/07/11 14:35:30 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[i] == '+' || base [i] == '-')
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
	while (c != base[j])
		j++;
	if (c == base[j])
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
	while (str[i] && ft_is_in_base(str[i], base) == 0)
	{
		res *= ft_strlen(base);
		res += ft_cstr(str[i], base);
		i++;
	}
	return (res * neg);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("On donne %s en string et %s en base\n", argv[1], argv[2]);
	printf("le resultat est : \n%d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}

