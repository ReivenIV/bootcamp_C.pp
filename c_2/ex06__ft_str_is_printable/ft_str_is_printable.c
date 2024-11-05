/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:11:42 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/08 15:55:04 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 06
ft_str_is_printable
Turn-in directory : ex06/
Files to turn in : ft_str_is_printable.c
Allowed functions : None

• Create a function that returns 1 if the string given as a parameter contains only
printable characters, and 0 if it contains any other character.
• It should return 1 if str is empty.
*/

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
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
	char	test[] = "\n";
	int	to_test = ft_str_is_printable(test);

	return (0);
}
*/
