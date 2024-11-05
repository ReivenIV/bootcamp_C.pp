/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:30:09 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/16 20:47:56 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create an iterated function that returns the value 
	of a power applied to a number.
• A power lower than 0 returns 0.
• Overflows must not be handled.
• We’ve decided that 0 power 0 will returns 1
*/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power == 0)
	{
		return (1);
	}
	i = power;
	res = 1;
	while (i >= 1)
	{
		res = res * nb;
		i--;
	}
	return (res);
}

/*
int	main(void)
{
	ft_iterative_power(11,2);
	// output : 11 * 11 = 121;
	return (0);
}
*/
