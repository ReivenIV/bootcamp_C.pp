/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:46:01 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/04 12:00:26 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	current_number;

	current_number = '0';
	while (current_number <= '9')
	{
		write(1, &current_number, 1);
		current_number++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
