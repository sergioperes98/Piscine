/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:06:56 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/19 21:31:44 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "OlLall";

	printf("%s", ft_strlowcase(str));
	return (0);
}*/
