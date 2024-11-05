/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:36:17 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/16 17:02:34 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create an iterated function that returns a number. 
This number is the result of a
factorial operation based on the number given as a parameter.
• If the argument is not valid the function should return 0.
• Overflows must not be handled, the function return will be undefined.
*/

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	i = nb - 1;
	res = nb;
	while (i != 0)
	{
		res = res * i;
		i--;
	}
	return (res);
}

/*
int	main(void)
{
	int	test = 5;
	// !5 = 2*2*2*2 = 120;
	ft_iterative_factorial(test);
	return (0);
}
*/
