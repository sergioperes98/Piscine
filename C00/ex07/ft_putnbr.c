/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:33:08 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/12 23:31:04 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	length_nbr(int nb)
{
	int	i;

	i = 1;
	while (nb / 10 > 0)
	{
		nb = nb / 10;
		i = i * 10;
	}
	return (i);
}

void	positive_nbr(int nb)
{
	int	length;

	length = length_nbr(nb);
	while (length >= 1)
	{
		ft_putchar(nb / length + '0');
		nb = nb % length;
		length = length / 10;
	}
}

void	negative_nbr(int nb)
{
	int	length;

	nb = -nb;
	length = length_nbr(nb);
	write(1, "-", 1);
	while (length >= 1)
	{
		ft_putchar(nb / length + '0');
		nb = nb % length;
		length = length / 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 2147483647)
	{
		positive_nbr(nb);
	}
	else if (nb < 0 && nb >= -2147483647)
	{
		negative_nbr(nb);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
}
