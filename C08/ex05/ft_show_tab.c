/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:28:36 by almarico          #+#    #+#             */
/*   Updated: 2023/07/24 14:57:33 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	ft_putnbr(int nb)
{
	long	nombre;
	char	c;

	nombre = nb;
	if (nombre < 0)
	{
		write(1, "-", 1);
		nombre *= -1;
	}
	if (nombre < 10)
	{
		c = nombre + '0';
		write(1, &c, 1);
	}
	if (nombre >= 10)
	{
		ft_putnbr(nombre / 10);
		c = (nombre % 10) + '0';
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		write(1, par[i].str, ft_strlen(par[i].str));
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, ft_strlen(par[i].copy));
		write(1, "\n", 1);
		i++;
	}
}
