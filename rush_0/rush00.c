/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:17:44 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/07 14:40:36 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/**
	> if 25 / 30 looks for corners
	> if 35 horizontal edges // 40 vertical edges
	> if 66 fillers (' ')
*/

int	place_finder(int xi, int yi, int x, int y)
{
	if ((xi == 1 && yi == 1) || (xi == x && yi == 1))
	{
		ft_putchar('o');
		return (1);
	}
	if ((xi == x && yi == y) || (xi == 1 && yi == y))
	{
		ft_putchar('o');
		return (1);
	}
	if (xi == 1 || xi == x)
	{
		ft_putchar('-');
		return (1);
	}
	if (yi == 1 || yi == y)
	{
		ft_putchar('|');
		return (1);
	}
	return (0);
}

void	rush00(int x, int y)
{
	int	xi;
	int	yi;

	xi = 1;
	yi = 1;
	while (xi <= x)
	{
		while (yi <= y)
		{
			if (place_finder(xi, yi, x, y) == 0)
			{
				ft_putchar(' ');
			}
			yi++;
		}
		ft_putchar('\n');
		yi = 1;
		xi++;
	}
}
