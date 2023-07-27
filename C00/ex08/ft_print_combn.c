/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:05:21 by almarico          #+#    #+#             */
/*   Updated: 2023/07/08 13:38:09 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(int *tab, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

void	ft_tab_comb_n(int *tab, int index, int n)
{
	if (tab[index] > 0)
		tab[index] = (tab[index -1] + 1);
	while (tab[index] < 10)
	{
		if (index < n - 1)
			ft_tab_comb_n(tab, index + 1, n);
		else
		{
			if (tab[index] != n - 1)
				write(1, ", ", 2);
			ft_display(tab, n);
		}
		tab[index]++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	ft_tab_comb_n(tab, 0, n);
}
/*
int	main(void)
{
	ft_print_combn(2);
	return (0);
}
*/
