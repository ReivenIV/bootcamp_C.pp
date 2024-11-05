/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:52:39 by olthorel          #+#    #+#             */
/*   Updated: 2024/09/07 13:55:20 by tcarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_print_corner04(int xi, int yi, int xmax, int ymax)
{
	if (xi == 0 && yi == 0)
	{
		ft_putchar('A');
		return (1);
	}
	if (xi == xmax && yi == ymax && xmax != 0 && ymax != 0)
	{
		ft_putchar('A');
		return (1);
	}
	if ((xi == xmax && yi == 0) || (yi == ymax && xi == 0))
	{
		ft_putchar('C');
		return (1);
	}
	return (0);
}

int	ft_print_edge04(int xi, int yi, int xmax, int ymax)
{
	if (xi == 0 || xi == xmax || yi == 0 || yi == ymax)
	{
		ft_putchar('B');
		return (1);
	}
	return (0);
}

void	rush04(int x, int y)
{
	int	xi;
	int	yi;

	yi = 0;
	while (yi < y)
	{
		xi = 0;
		while (xi < x)
		{
			if (ft_print_corner04(xi, yi, x - 1, y - 1) == 0)
			{
				if (ft_print_edge04(xi, yi, x -1, y - 1) == 0)
					ft_putchar(' ');
			}
			xi++;
		}
		ft_putchar('\n');
		yi++;
	}
}
