/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:24:43 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/08 21:24:43 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i < 58)
	{
		write (1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
