/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:59:14 by almarico          #+#    #+#             */
/*   Updated: 2023/07/08 11:58:58 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int    main(void)
{
    int    a;
    int b;

    a = 0;
    b = 42;
    printf("a = %d et b = %d\n", a, b);
    printf("ft_swap(&a, &b);\n");
    ft_swap(&a, &b);
    printf("a = %d et b = %d\n", a, b);
}
*/
