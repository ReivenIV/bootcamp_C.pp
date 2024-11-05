/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:21:16 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/16 17:05:27 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create a function that returns 1 if the number given 
	as a parameter is a prime number, and 0 if it isn’t.
• 0 and 1 are not prime numbers.
*/
int	ft_is_prime(int nb)
{
	int	i;
	int	test;

	i = 2;
	test = 0;
	if (nb == 0 || nb == 1)
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
/*
int	main(void)
{
	ft_is_prime(1);
	return (0);
}
*/
