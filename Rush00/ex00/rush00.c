/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:11:27 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/11 16:02:59 by svilaca-         ###   ########.fr       */
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
	a = 'o';
	b = '-';
	c = 'o';
	i = x - 2;
	ft_putchar(a);
	if (x > 1)
	{
		while (i > 0)
		{
			ft_putchar(b);
			i--;
		}
		ft_putchar(c);
	}
	write(1, "\n", 1);
}

void	ft_bb(int x)
{
	int		i;
	char	b;
	char	e;

	i = 0;
	b = '|';
	e = ' ';
	i = x - 2;
	ft_putchar(b);
	if (x > 1)
	{
		while (i > 0)
		{
			ft_putchar(e);
			i--;
		}
		ft_putchar(b);
	}
	write(1, "\n", 1);
}

void	ft_ca(int x)
{
	int		i;
	char	a;
	char	b;
	char	c;

	i = 0;
	a = 'o';
	b = '-';
	c = 'o';
	i = x - 2;
	ft_putchar(c);
	if (x > 1)
	{
		while (i > 0)
		{	
			ft_putchar(b);
			i--;
		}
		ft_putchar(a);
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "Only put positive values !\n", 27);
	}
	else
	{
		ft_ac(x);
		i = y - 2;
		while (i > 0)
		{	
			ft_bb(x);
			i--;
		}
		if (y > 1)
		{
			ft_ca(x);
			write(1, "\n", 1);
		}
	}
}
