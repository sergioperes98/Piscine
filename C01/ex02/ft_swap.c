/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:05:16 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/18 21:44:11 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*int	main(void)
{
	int	nb1;
	int	nb2;

	nb1 = -45;
	nb2 = 105;
	ft_swap(&nb1, &nb2);
	printf("%d\n", nb1);
	printf("%d", nb2);
	return (0);
}*/
