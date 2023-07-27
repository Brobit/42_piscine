/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:59:42 by almarico          #+#    #+#             */
/*   Updated: 2023/07/08 13:25:05 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
#include <stdio.h>

int    main(void)
{
    int    a;
    int b;

    a = 85;
    b = 2;
    printf("a = %d , b = %d\n", a, b);
    printf("ft_ultimate_div_mod(&a, &b);\n");
    ft_ultimate_div_mod(&a, &b);
    printf("a = %d , b = %d\n", a, b);
}
*/
