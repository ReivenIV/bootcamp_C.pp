/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:24:06 by tcarlier          #+#    #+#             */
/*   Updated: 2024/09/07 14:52:08 by tcarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	print_angles(int xi, int yi, int x, int y)
{
	if ((xi == 0 && yi == 0))
	{
		ft_putchar('/');
		return (0);
	}
	if (xi == x - 1 && yi == y - 1 && x != 1 && y != 1)
	{
		ft_putchar('/');
		return (0);
	}
	if ((xi == 0 && yi == (y - 1)) || (xi == (x - 1) && yi == 0))
	{
		ft_putchar('\\');
		return (0);
	}
	return (0);
}

void	print_eedge(int xi, int yi, int x, int y)
{
	if ((xi == 0 || xi == (x - 1)) && (yi != 0 && yi != (y - 1)))
		ft_putchar('*');
	if ((yi == 0 || yi == (y - 1)) && (xi != 0 && xi != (x - 1)))
		ft_putchar('*');
}

void	rush01(int x, int y)
{
	int	xi;
	int	yi;

	xi = 0;
	yi = 0;
	while (xi != x && yi != y)
	{
		if (xi == 0 || xi == (x - 1))
			print_angles(xi, yi, x, y);
		if (xi == 0 || yi == 0 || yi == (y - 1) || xi == (x - 1))
			print_eedge(xi, yi, x, y);
		if (xi != 0 && xi != (x - 1) && yi != (y - 1) && yi != 0)
			ft_putchar(' ');
		yi++;
		if (yi > (y - 1))
		{
			yi = 0;
			ft_putchar('\n');
			xi++;
		}
	}
}
