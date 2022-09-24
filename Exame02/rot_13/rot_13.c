/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilaca- <svilaca-@student42.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:13:10 by svilaca-          #+#    #+#             */
/*   Updated: 2022/09/23 16:11:07 by svilaca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'M') /
					|| (argv[1][i] >= 'a' && argv[1][i] <= 'm'))
			{
				argv[1][i] = argv[1][i] + 13;
				write(1, &argv[1][i], 1);
			}
			else if ((argv[1][i] > 'M' && argv[1][i] <= 'Z') /
					|| (argv[1][i] > 'm' && argv[1][i] <= 'z'))
			{
				argv[1][i] = argv[1][i] - 13;
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
