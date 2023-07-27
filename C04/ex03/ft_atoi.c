/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:47:04 by almarico          #+#    #+#             */
/*   Updated: 2023/07/09 23:31:40 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	neg;
	int	i;

	i = 0;
	res = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += (str[i] - '0');
		i++;
	}
	return (res * neg);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("Voici ce que retourne ft_atoi :\n%d\n", ft_atoi(argv[1]));
	return (0);
}
*/
