/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:36:56 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/14 19:52:14 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a / *b;
	*b = *a % *b;
	*a = aux;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 25;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
	return (0);
}*/
