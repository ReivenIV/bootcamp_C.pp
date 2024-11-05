/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:42:42 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/11 17:07:10 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	• Create a function that displays the number entered as a parameter.
  	  The function has to be able to display all possible values
	  within an int type variable.

	• ft_putnbr(42) displays "42".
*/

#include <unistd.h>

void	pt_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		pt_char('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	pt_char(nb % 10 + 48);
}

/*
int	main(void)
{
	int	test = -2147483648;
	ft_putnbr(test);
	return (0);
}
*/
/* Personal notes
	• You need to think recursive as an inseption in the function
	  the function inside the function inside the function.
	• The Code ::
		• We have 3 ifs, 1 for negatives, 1 for the bug of INT_MIN
		  check (::> man limits.h inside man ::> /INT_MAX).
		• 3 if :: the recursive if the (nb > 9). Every time we have an int
		  bigger than 9 we create an extra inseption in the function.
*/
