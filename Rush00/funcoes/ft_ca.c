/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_CA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:07:15 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/10 17:28:41 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_ca(int x)
{
	int		i;
	char	a;
	char	b;
	char	c;

	i = 0;
	a = 'A';
	b = 'B';
	c = 'C';
	i = x - 2;
	ft_putchar(c);
	while (i > 0)
	{
		ft_putchar(b);
		i--;
	}
	ft_putchar(a);
}

int	main(void)
{
	ft_ca(20);
	return (0);
}
