/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:00:03 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/20 17:54:43 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
			break ;
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
			break ;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int	i;
	char	str1[] = "Ola ";
	char	str2[] = "Ola";
	
	i = ft_strcmp(str1, str2);
	i = strcmp(str1, str2);
	printf("%d", i);
	return (0);
}*/
