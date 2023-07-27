/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:09:58 by almarico          #+#    #+#             */
/*   Updated: 2023/07/08 16:56:11 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*
#include <limits.h>
int	main(void)
{
	ft_putnbr(INT_MAX);
	write(1, "\n", 1);
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
	ft_putnbr(0);
	return (0);
}
*/
