/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:11:27 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/20 19:07:37 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if (((str[i] < '0' || str[i] > 'z') \
					|| (str[i] > '9' && str[i] < 'A') \
					|| (str[i] > 'Z' && str[i] < 'a')) \
				&& ((str[i + 1] >= 'a' && str[i + 1] <= 'z')))
				str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = " oi, tU+do bEm, 42pat?";

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
