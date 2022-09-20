/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:01:45 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/20 22:38:53 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (to_find[j + 1] == '\0')
				return (to_find);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "Ola42SouEu";
	char	to_find[] = "42";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}
