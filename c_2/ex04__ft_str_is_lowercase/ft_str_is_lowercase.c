/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:02:08 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/08 18:34:34 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 04
ft_str_is_lowercase
Turn-in directory : ex04/
Files to turn in : ft_str_is_lowercase.c
Allowed functions : None

• Create a function that returns 1 if the string given as a parameter contains only
lowercase alphabetical characters, and 0 if it contains any other character.
• It should return 1 if str is empty.

*/

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	int		to_test = ft_str_is_lowercase(test);
	return (0);
}
*/
