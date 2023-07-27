/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:49:53 by almarico          #+#    #+#             */
/*   Updated: 2023/07/18 19:03:39 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i -1] >= 'a' && str[i -1] <= 'z')
				&& !(str[i -1] >= 'A' && str[i -1] <= 'Z')
				&& !(str[i -1] >= '0' && str[i -1] <= '9'))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("Voici la chaine de caractere de base :\n%s\n", argv[1]);
	printf("Voici la chaine de caractere modifer:\n%s\n", ft_strcapitalize(argv[1]));	
	return (0);
}

