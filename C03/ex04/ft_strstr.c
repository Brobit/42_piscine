/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarico <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:52:32 by almarico          #+#    #+#             */
/*   Updated: 2023/07/10 12:27:03 by almarico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("phrase de base : \n%s\nCe qu'on cherche :\n%s\n", argv[1], argv[2]);
	printf("resultat :\n%s", ft_strstr(argv[1], argv[2]));
	return (0);
}
*/
