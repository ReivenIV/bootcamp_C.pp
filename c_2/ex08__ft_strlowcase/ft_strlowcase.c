/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:53:07 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/08 18:28:05 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 08
ft_strlowcase
Turn-in directory : ex08/
Files to turn in : ft_strlowcase.c
Allowed functions : None
• Create a function that transforms every letter to lowercase.
• It should return str.
*/

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	test[] = "+WERTYUId";

	return (0);
}
*/
