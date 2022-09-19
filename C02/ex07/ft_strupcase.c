/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:06:56 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/19 21:22:28 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "OlLall";

	printf("%s", ft_strupcase(str));
	return (0);
}*/
