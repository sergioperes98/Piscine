/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 23:34:16 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/18 17:59:26 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		i++;
		j--;
	}
}

/*int	main(void)
{
	int	i = 0;
	int	matriz[] = {1, 2, 3, 4};

	ft_rev_int_tab(matriz, 4);
	while (i < 4)
	{
		printf("%d", matriz[i]);
		i++;
	}
	return (0);
}*/
