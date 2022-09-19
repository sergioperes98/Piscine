/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:45:34 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/19 18:24:08 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 122)
			return (0);
		else if (str[i] < 97 && str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "Ola";

	printf("%d", ft_str_is_alpha(str));
	return (0);
}*/
