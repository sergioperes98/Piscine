/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:01:45 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/25 17:33:10 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (to_find[j] == str[i])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i - j]);
				i++;
				j++;
			}
			else
				break ;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "O4la42SouEu";
	char	to_find[] = "42";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
