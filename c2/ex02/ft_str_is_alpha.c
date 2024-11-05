/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:27:19 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/13 11:53:33 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
• Create a function that returns 1 if the string given as a parameter
contains only alphabetical characters,
and 0 if it contains any other character.

• It should return 1 if str is empty.
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// (!(str[i] => 'A' && str[i] <= 'Z'))
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	return (0);
}
*/
/* Reminder
I did nested ifs because of the margin otherwise norm will not pas
a single if  statement would work.
*/
