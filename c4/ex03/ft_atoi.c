/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:23:13 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/11 15:39:59 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	power;

	i = 0;
	res = 0;
	power = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			power = power * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * power);
}

/*
int	main(void)
{
	char	test[] = " ---247abcuytre1";
	return (0);
}
*/

/*	Notes
	• In these exercice we have 3 whiles.
	• W1: for empty spaces ' ' and from 9 to 12 from the ascii table.
	• w2: every '-' = power*-1 like that we keep track of +/- final output.
	• w3: Its the main loop where we convert INTs to CHARs.
	• return : At the end we aplly the power to the reponse.
*/
