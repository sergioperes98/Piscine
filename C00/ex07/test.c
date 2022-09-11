/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:49:47 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/09 12:49:47 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}
        

void	ft_putnbr(int nb)
{
	int	i;
	int	j;
	int 	dig;
	char	ch;

	i = 0;
	while (nb != 0)
	{
		dig = nb % 10;
		ch = dig + '0';
		/*write (1, &ch, 1);*/
		nb /= 10;
		i++;
		j = i + '0';
	}
	write (1, &j, 1);
	/*i = 0;
	if (nb == 0)
		nb = 1;
	else
		while (nb >= 1)
		{
			nb = nb/10;
			i++;
		}
	ft_putchar(i+'0');*/
}

int	main(void)
{
	ft_putnbr(1355);
	return (0);
}
