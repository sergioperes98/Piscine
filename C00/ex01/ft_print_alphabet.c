/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:15:27 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/08 17:15:27 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i < 123)
	{
		write (1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
