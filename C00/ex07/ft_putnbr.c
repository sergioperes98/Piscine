/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:51:22 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/09 15:51:22 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	i;
	int	j;
	int	k;
	int	dig;
	int	l;
	
	l = 0;
	i = 0;
	j = 0;
	k = 0;
	dig = 0;
	l = nb + '0';
	write (1, &l, 1);
	while (nb >= 1)
	{
		dig = nb % 10;
		nb /= 10;
		i++;
	}
	j = i + '0';
	write (1, &j, 1);
	while (i <= 1)
	{
		nb = nb * 10;
		k = nb + '0';
		write (1, &k, 1);
	}
	
}

int	main(void)
{
	ft_putnbr(3);
	return (0);
}
