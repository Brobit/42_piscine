/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:04:29 by almarico          #+#    #+#             */
/*   Updated: 2023/07/10 13:24:01 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define TABLEAU "0123456789abcdef"

void	ft_write_text(unsigned char *str, int size)
{
	int	i;

	i = 0;
	if (size > 16)
		size = 16;
	while (i < size && str[i])
	{
		if (str[i] < 32 || str[i] > 127)
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	ft_write_text_hex(unsigned char *str, int size)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			write(1, &TABLEAU[str[i] / 16], 1);
			write(1, &TABLEAU[str[i] % 16], 1);
		}
		else
		{
			write(1, " ", 1);
			write(1, " ", 1);
		}
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_hex_addr(long long int x, int size)
{
	if (size != 0)
		ft_print_hex_addr(x / 16, --size);
	write(1, &TABLEAU[x % 16], 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	long long int	p;

	p = (long long int)addr;
	if (size > 0)
	{
		ft_print_hex_addr(p, 16);
		write(1, ": ", 2);
		ft_write_text_hex(addr, size);
		ft_write_text(addr, size);
		write(1, "\n", 1);
		if (size > 16)
			ft_print_memory((char *)addr + 16, size - 16);
	}
	return (addr);
}
/*
int	main(void)
{
	ft_print_memory("salut comme\x81nt ca va, on dirait que tout
	va fonctionner a merveille", 67);
	return (0);
}
*/
