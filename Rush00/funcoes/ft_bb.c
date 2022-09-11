/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_BB.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:07:15 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/10 16:20:40 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_bb(int x)
{
	int		i;
	char	b;
	char	e;

	i = 0;
	b = 'B';
	e = ' ';
	i = x - 2;
	ft_putchar(b);
	while (i > 0)
	{
		ft_putchar(e);
		i--;
	}
	ft_putchar(b);
}

int	main(void)
{
	ft_bb(10);
	return (0);
}
