/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:36:38 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/16 20:48:22 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create a recursive function that returns the factorial of
	the number given as a parameter.
• If the argument is not valid the function should return 0.
• Overflows must not be handled, the function return will be undefined.
*/

int	factorial_helper(nb, cumulative_res)
{
	if (nb == 0 || nb == 1)
	{
		return (cumulative_res);
	}
	return (factorial_helper(nb - 1, cumulative_res * nb));
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	return (factorial_helper(nb, 1));
}

/*
int	main(void)
{
	ft_recursive_factorial(5);
	// output : !5 = 2*2*2*2 = 120;
	return (0);
}
*/
/* :: NOTES ::
	• I know that we could solve the code in one single function. The idea was
	  to create a clearer way to understand it.
	• In the func helper we have nb and cumulative_res the idea is that we do
	  (nb - 1) to have every !5= cs*4 cs*3 cs*2 and when we reach 1 we stop the
	  recursive.
*/
