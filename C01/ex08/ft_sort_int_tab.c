/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:12:17 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/18 18:13:26 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < (size - i - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = aux;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

/*int	main(void)
{
	int	i = 0;
	int	arr[] = {7, 3, 5, 6, 4, 1, 10, 2, 8, 9};

	ft_sort_int_tab(arr, 10);
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}*/
