/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 10:08:28 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/08 20:08:42 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
	• Reproduce the behavior of the function strcpy (man strcpy).
	Allowed functions : None
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	// We create an array of strings
	char	src[] = "test multiple strings";

	// We create an empty array of string with a high random amount of data
	// (like that we don't have any problem)
	char	dest[50];
	char	jump;

	jump = '\n';

	ft_strcpy(dest, src);
	// We print the output
	write(1, &dest, 50); // output :: "test multiple stringsi4߾��߾�"
	write(1, &jump, 1);
	write(1, &dest, 2);  // output :: "te%"
	return (0);
}
*/
/*	Some personal thoughts:
	The function strcopy(*destination, *source)
	will copy the data from source and pasting it to source. 

	Things to keep in mind : [dest[i] = src[i];] and [*dest[i] = *src[i];] 
	are two different things. when we are *dest[i] we are dereferencing 
	is not going to work the code. When we do dest[i] we are acceding to the
	data in the array.

*/
