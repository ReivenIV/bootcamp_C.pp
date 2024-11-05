/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:19:02 by lgarrigu          #+#    #+#             */
/*   Updated: 2024/09/07 15:07:30 by lgarrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_print_corner02(int xi, int xmax, int yi, int ymax)
{
	if ((xi == 0 && yi == 0) || (xi == 0 && yi == ymax))
	{
		ft_putchar('A');
		return (1);
	}
	if (yi == 0 && xi == xmax)
	{
		ft_putchar('C');
		return (1);
	}
	if (xi == xmax && yi == ymax)
	{
		ft_putchar('C');
		return (1);
	}
	return (0);
}

int	ft_print_edge02(int xi, int xmax, int yi, int ymax)
{
	if ((xi == 0 || xi == xmax) || (yi == 0 || yi == ymax))
	{
		ft_putchar('B');
		return (1);
	}
	return (0);
}

void	rush02(int x, int y)
{
	int	xi;
	int	yi;

	xi = 0;
	while (xi < x)
	{
		yi = 0;
		while (yi < y)
		{
			if (ft_print_corner02(xi, x - 1, yi, y - 1) == 0)
			{
				if (ft_print_edge02(xi, x - 1, yi, y - 1) == 0)
					ft_putchar(' ');
			}
			yi++;
		}
		ft_putchar('\n');
		xi++;
	}
}
