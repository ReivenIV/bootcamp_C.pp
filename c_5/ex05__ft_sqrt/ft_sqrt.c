/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:34:26 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/16 17:38:38 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create a function that returns the square root of a
	number (if it exists), or 0 if the square root is an irrational number.
*/
int	ft_sqrt(int nb)
{
	int	test;
	int	i;

	test = 0;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		test = i * i;
		if (test == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	ft_sqrt(25);
	return (0);
}
*/
