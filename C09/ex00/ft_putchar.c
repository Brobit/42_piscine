/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:54:24 by almarico          #+#    #+#             */
/*   Updated: 2023/07/04 13:43:57 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
				ft_putchar('a');
				ft_putchar('l');
				ft_putchar('a');
				ft_putchar('n');
				ft_putchar('n');
				ft_putchar('1');
				ft_putchar('2');
				ft_putchar('3');
				ft_putchar('4');
				ft_putchar('5');
				return(0);
}
*/
