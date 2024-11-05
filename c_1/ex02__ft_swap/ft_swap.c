/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:41:31 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/06 20:49:15 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
• Create a function that swaps the value of two integers 
whose addresses are entered
as parameters.
• Here’s how it should be prototyped :
*/

void	ft_swap(int *a, int *b)
{
	int	saved_int;

	saved_int = *a;
	*a = *b;
	*b = saved_int;
}

/*
int	main(void)
{
	int	a_sv = 5;
	int b_sv = 30;

	int *pt_a = &a_sv;
	int	*pt_b = &b_sv;

	ft_swap(pt_a, pt_b);

	write::::("a = %d, b = %d\n", a_sv, b_sv);

	return (0);
}
*/
