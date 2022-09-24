/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:05:29 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/23 15:12:12 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	int	aux;
	int	size;

	j = 0;
	size = 0;
	while (str[size] != '\0')
		size++;
	i = size - 1;
	while (j < (size / 2))
	{
		aux = str[j];
		str[j] = str[i];
		str[i] = aux;
		i--;
		j++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "12345";

	printf("%s", ft_strrev(str));
	return (0);
}*/
