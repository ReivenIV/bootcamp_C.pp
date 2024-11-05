/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:42:54 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/09 12:42:48 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// • Reproduce the behavior of the function strncpy (man strncpy).

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[50] = "Doing sport??????????";
	char	dest[50];

	unsigned int	n = 2;
	return (;
}
*/
/* REMINDER
 	• Line 22 : will check until i < n and if we reached the end of the string.
	Otherwise will stop the loop.

	• in man strncpy sais that the function will add '\0' till end of "n"
	even if the word is finished. is for that i added the second while loop

	Text from man :
	```
	If the length of src is less than n, strncpy() writes
	additional null bytes  to  dest  to
    ensure that a total of n bytes are written.
	```

*/
