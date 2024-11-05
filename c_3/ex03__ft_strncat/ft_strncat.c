/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:37:38 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/09 17:21:08 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//• Create a function that displays a string of characters on 
//  the standard output.

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = ft_strlen(dest);
	if (!dest || !src || !nb)
	{
		return (dest);
	}
	while (i < nb && src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char dest[50] = "Hello, ";
	char src[] = "test";
	unsigned int nb = 2;
	// outputi is : "Hello, te"
	return (0);
}
*/

/*
	• These excercie is almost the same as strcat (ex03) the difference
	  remains in the line 42 with de ``(i < nb && src[i] != '\0')``
	  specialy i < nb.
*/
