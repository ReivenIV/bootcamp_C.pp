/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:56:36 by tcarlier          #+#    #+#             */
/*   Updated: 2024/09/07 12:17:45 by tcarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_angle(int xi, int yi, int x, int y)
{
	if ((xi == 0 && yi == 0) || (xi == (x - 1) && yi == 0))
		ft_putchar('A');
	else if ((xi == (x - 1) && yi == (y - 1)) || (xi == 0 && yi == (y - 1)))
		ft_putchar('C');
}

void	print_edge(int xi, int yi, int x, int y)
{
	if ((xi == 0 || xi == (x - 1)) && (yi != 0 && yi != (y - 1)))
		ft_putchar('B');
	if ((yi == 0 || yi == (y - 1)) && (xi != 0 && xi != (x - 1)))
		ft_putchar('B');
}

void	rush03(int x, int y)
{
	int	xi;
	int	yi;

	xi = 0;
	yi = 0;
	while (xi != x && yi != y)
	{
		if (xi == 0 || xi == (x - 1))
			print_angle(xi, yi, x, y);
		if (xi == 0 || yi == 0 || yi == (y - 1) || xi == (x - 1))
			print_edge(xi, yi, x, y);
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
