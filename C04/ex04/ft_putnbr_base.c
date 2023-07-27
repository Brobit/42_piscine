/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:03:43 by almarico          #+#    #+#             */
/*   Updated: 2023/07/19 01:00:52 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_write(char *base, long nbr, int base_len)
{
	if (nbr >= base_len)
		ft_write(base, nbr / base_len, base_len);
	write(1, &base[nbr % base_len], 1);
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

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_len;

	nb = nbr;
	if (ft_check_base(base) != 1)
	{
		base_len = ft_strlen(base);
		if (nb < 0)
		{
			write (1, "-", 1);
			nb *= -1;
		}
		ft_write(base, nb, base_len);
	}
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("On donne %d en nombre et %s en base\n", atoi(argv[1]), argv[2]);
	printf("le resultat est : \n");
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}

