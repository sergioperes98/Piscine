/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:01:56 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/26 00:49:35 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	size;
	int	limit;

	i = 0;
	size = max - min;
	limit = max - 1;
	arr = malloc(sizeof(int) * size);
	while (size > 0)
	{
		arr[i] = limit ;
		i++;
		limit--;
		size--;
	}
	return (arr);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i;

	min = 3;
	max = 11;
	arr = ft_range(min, max);
	i = 0;
	while (arr[i])
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}*/
