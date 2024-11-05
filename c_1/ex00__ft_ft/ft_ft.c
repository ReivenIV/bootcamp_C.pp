/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:11:00 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/06 20:47:41 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* 
• Create a function that takes a pointer to int as a parameter, 
and sets the value "42"
to that int.
• Here’s how it should be prototyped :

---! we assign a value to the variable stored_data
*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
int	main(void)
{
	//	stored_data will be store the data
	//	REMINDER a pointer without a variable to stored the data will never work
	int	stored_data;
	int	*nbr = &stored_data;

	ft_ft(nbr);
	return (0);
}
*/
