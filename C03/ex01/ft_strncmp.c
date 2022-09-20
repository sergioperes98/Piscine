/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:00:03 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/20 21:46:11 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
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
	char	str1[] = "Ola";
	char	str2[] = "Ola";
	
	i = ft_strncmp(str1, str2, 10);
	i = strncmp(str1, str2, 2);
	printf("%d", i);
	return (0);
}*/
