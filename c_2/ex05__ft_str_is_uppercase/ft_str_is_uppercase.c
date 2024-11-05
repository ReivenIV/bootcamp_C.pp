/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:08:43 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/08 15:10:21 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 05
ft_str_is_uppercase
Turn-in directory : ex05/
Files to turn in : ft_str_is_uppercase.c
Allowed functions : None

• Create a function that returns 1 if the string given as a parameter contains only
uppercase alphabetical characters, and 0 if it contains any other character.
• It should return 1 if str is empty.
*/

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	int		to_test = ft_str_is_uppercase(test);
	return (0);
}
*/
