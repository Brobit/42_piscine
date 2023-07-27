/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:55:44 by almarico          #+#    #+#             */
/*   Updated: 2023/07/09 21:10:54 by almarico         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	i;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i])
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
	printf("%s\n", ft_strcat(argv[1], argv[2]));
	printf("%s\n", strcat(argv[1], argv[2]));
	return (0);
}
*/
