/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_AC.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:07:15 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/10 16:15:40 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_ac(int x)
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
	ft_putchar(a);
	while (i > 0)
	{
		ft_putchar(b);
		i--;
	}
	ft_putchar(c);
}

int	main(void)
{
	ft_ac(20);
	return (0);
}
