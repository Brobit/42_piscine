/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:11:46 by almarico          #+#    #+#             */
/*   Updated: 2023/07/08 13:29:35 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	(void)argc;
	printf("%d\n", ft_strlen(argv[1]));
	return (0);
}
*/
