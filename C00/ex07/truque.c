/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   truque.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:23:57 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/09 16:23:57 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	length_nb(int nb)
{
	int	value;

	value = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		value = value * 10;
	}
	return (value);
}

int	main(void)
{
	int	i;

	i = 0;
	i = length_nb(135);
	printf ("%d", i);
	return (0);
}
	
