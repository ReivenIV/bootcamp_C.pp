/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:36:42 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/26 18:24:39 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void pt_nb(int nb)
{
	int	res;

	if (nb > 9)
	{
		pt_nb(nb / 10);
	}
	res = nb % 10 + '0';
	write(1, &res, 1);
}

void	ft_fb(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			pt_nb(i);
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	ft_fb();
	return (0);
}
