/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:43:59 by almarico          #+#    #+#             */
/*   Updated: 2023/07/09 18:50:23 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				len_dest;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strncat(argv[1], argv[2], 5));
	printf("%s\n", strncat(argv[3], argv[4], 5));
	return (0);
}
*/
