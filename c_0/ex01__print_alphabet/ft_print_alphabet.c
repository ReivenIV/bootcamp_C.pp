/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:26:12 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/04 11:39:29 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	current_letter;

	current_letter = 'a';
	while (current_letter <= 'z')
	{
		write(1, &current_letter, 1);
		current_letter++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
