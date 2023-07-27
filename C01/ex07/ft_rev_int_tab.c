/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:23:39 by almarico          #+#    #+#             */
/*   Updated: 2023/07/08 13:30:32 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size / 2)
	{
		j = (size - i - 1);
		ft_swap(&tab[i], &tab[j]);
		i++;
	}
}
/*
#include <stdio.h>

int    main(void)
{
    int    size;
    int    tab[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    size = 10;
    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n"
        , tab[0], tab[1], tab[2], tab[3], tab[4], tab[5],
        tab[6], tab[7], tab[8], tab[9]);
    printf("ft_rev_int_tab(tab, size);\n");
    ft_rev_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n"
        , tab[0], tab[1], tab[2], tab[3], tab[4], tab[5],
        tab[6], tab[7], tab[8], tab[9]);
    return (0);
}
*/
