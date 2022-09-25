/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:39:48 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/25 18:26:40 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	swap(char *argv[], int *j)
{
	char	*aux;

	aux = argv[*j];
	argv[*j] = argv[*j + 1];
	argv[*j + 1] = aux;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
			break ;
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
			break ;
		}
		i++;
	}
	return (0);
}

void	ft_print_params(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	if (argc == 2)
		ft_putstr(argv[1]);
	else if (argc > 2)
	{
		while (i < argc)
		{
			while (j < (argc - i - 1))
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
					swap(argv, &j);
				j++;
			}
			i++;
			j = 1;
		}
		ft_print_params(argc, argv);
	}
	return (0);
}
