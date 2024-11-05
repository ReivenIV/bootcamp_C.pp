/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:23:11 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/06 20:49:50 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
• Create a function ft_div_mod prototyped like this :
• This function divides parameters a by b and stores the 
result in the int pointed by
div. It also stores the remainder of the division of 
a by b in the int pointed by mod.
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	test_a = 24;
	int test_b = 10;
	int filler_1 = 0;
	int filler_2 = 0;

	ft_div_mod(test_a, test_b, &filler_1, &filler_2);
	return (0);
}
*/
