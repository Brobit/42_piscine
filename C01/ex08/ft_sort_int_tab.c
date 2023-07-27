/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:50:21 by almarico          #+#    #+#             */
/*   Updated: 2023/07/08 13:31:14 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int    main(void)
{
    int    size;
    int    tab[] = {3,8,6,7,5,4,9,2,1,0};

    size = 10;
    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n"
        , tab[0], tab[1], tab[2], tab[3], tab[4], tab[5],
        tab[6], tab[7], tab[8], tab[9]);
    printf("ft_sort_int_tab(tab, size);\n");
    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n"
        , tab[0], tab[1], tab[2], tab[3], tab[4], tab[5],
        tab[6], tab[7], tab[8], tab[9]);
    return (0);
}
*/
