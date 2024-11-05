/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:33:20 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/05 10:34:10 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// will print
void	to_write(char a1, char a2, char b1, char b2)
{
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (a1 + a2 + b1 + b2 <= 226)
		write(1, ", ", 2);
}

// will change the ints into ASCII codes
void	to_ascii(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = (a / 10) + 48;
	a2 = (a % 10) + 48;
	b1 = (b / 10) + 48;
	b2 = (b % 10) + 48;
	to_write(a1, a2, b1, b2);
}

// will output the two numbers 00 01
void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			to_ascii(a, b);
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
