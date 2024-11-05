/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:37:49 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/16 17:05:54 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create a function that returns the next prime number greater or 
	equal to the number given as argument.
*/
int	prime(int nb)
{
	int	i;
	int	test;

	i = 2;
	test = 0;
	if (nb <= 1)
	{
		return (0);
	}
	while (i < nb)
	{
		test = nb % i;
		if (test == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	test;
	int	i;

	test = 0;
	i = 0;
	while (test == 0)
	{
		test = prime(nb + i);
		if (test == 1)
		{
			return (nb + i);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	ft_find_next_prime(9);
	return (0);
}
*/
