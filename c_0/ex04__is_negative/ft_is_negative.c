/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:05:47 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/04 13:14:51 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative_int;
	char	positive_int;

	negative_int = 'N';
	positive_int = 'P';
	if (n >= 0)
		write(1, &positive_int, 1);
	else
		write(1, &negative_int, 1);
}

/*
int	main(void)
{
	ft_is_negative(5);
	return (0);
}
*/
