/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:51:15 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/06 20:50:23 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
• Create a function ft_ultimate_div_mod with the following prototype :
• This function divides parameters a by b. The result of 
this division is stored in the
int pointed by a. The remainder of the division is stored in 
the int pointed by b.
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res_div;
	int	res_mod;

	res_div = *a / *b;
	res_mod = *a % *b;
	*a = res_div;
	*b = res_mod;
}

/*
int	main(void)
{
	int	val_a = 24;
	int val_b = 10;
	ft_ultimate_div_mod(&val_a, &val_b);
	return(0);
}
*/
