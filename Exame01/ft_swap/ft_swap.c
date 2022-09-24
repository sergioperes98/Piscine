/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:58:18 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/16 16:06:30 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*int	main(void)
{
	int	nbr1 = 8;
	int	nbr2 = 5;

	ft_swap(&nbr1, &nbr2);
	printf("%d", nbr1);
	printf("%d", nbr2);
	return (0);
}*/
