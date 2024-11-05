/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:19:08 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/16 20:53:17 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create a recursive function that returns the value of a 
	power applied to a number.
• A power lower than 0 returns 0.
• Overflows must not be handled, the function return will be undefined.
• We’ve decided that 0 power 0 will returns 1
*/
int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
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
		return (res = 1);
	}
	if (power == 1)
	{
		return (nb);
	}
	if (power > 1)
	{
		res = ft_recursive_power(nb, power - 1);
	}
	res = res * nb;
	return (res);
}
/*
int	main(void)
{
	ft_recursive_power(2, 4)
	return (0);
}
*/
