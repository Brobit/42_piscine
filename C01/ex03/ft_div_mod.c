/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:54:24 by almarico          #+#    #+#             */
/*   Updated: 2023/07/08 13:23:27 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int    main(void)
{
    int    div;
    int    mod;
    int    a;
    int b;

    div = 0;
    mod = 0;
    a = 85;
    b = 2;
    printf("a = %d , b = %d\n", a, b);
    printf("div = %d , mod = %d\n", div, mod);
    printf("ft_div_mod(a, b, &div, &mod);\n");
    ft_div_mod(a, b, &div, &mod);
    printf("div = %d , mod = %d\n", div, mod);
}
*/
