/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:44:41 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/25 22:59:49 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	dst = malloc(sizeof(char) * (i + 1));
	while (i > 0)
	{
		dst[j] = src[j];
		j++;
		i--;
	}
	dst[j] = '\0';
	return (dst);
}	

/*int	main(void)
{
	char	src[] = "Ola";
	char	*dst;

	dst = ft_strdup(src);
	printf("%s", dst);
	return (0);
}*/

/*int	main(void)
{
	char	string[] = "Ola";
	char	*target;

	target = strdup(string);
	printf("%s", target);
	return (0);
}*/
