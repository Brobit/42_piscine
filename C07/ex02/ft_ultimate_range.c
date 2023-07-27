/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:44:05 by almarico          #+#    #+#             */
/*   Updated: 2023/07/17 05:58:50 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	*range = (int *)malloc(diff * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = -1;
	while (++i < diff)
		(*range)[i] = min++;
	return (diff);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	*tab;
	int	res;
	int	i;

	(void)argc;
	i = 0;
	res = ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2]));
	printf("\n*tab vaut : %d\n", res);
	while (i < res)
		printf("\n*tab contient : %d\n", tab[i++]);
	return (0);
}
*/
