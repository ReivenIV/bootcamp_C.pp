/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:58:11 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/08 18:26:52 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 07
ft_strupcase
Turn-in directory : ex07/
Files to turn in : ft_strupcase.c
Allowed functions : None

• Create a function that transforms every letter to uppercase.
• It should return str.
*/

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	test[] = "++asdfghjIkl";
	return (0);
}
*/
