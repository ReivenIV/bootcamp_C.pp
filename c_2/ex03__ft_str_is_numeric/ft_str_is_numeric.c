/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:48:30 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/08 20:33:29 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 03
ft_str_is_numeric
Turn-in directory : ex03/
Files to turn in : ft_str_is_numeric.c
Allowed functions : None

• Create a function that returns 1 if the string given as a parameter contains only
digits, and 0 if it contains any other character.
• It should return 1 if str is empty.
*/

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	test[] = "";
	int		to_test = ft_str_is_numeric(test);

	return (0);
}
*/
