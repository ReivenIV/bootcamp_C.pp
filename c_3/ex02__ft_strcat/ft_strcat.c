/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:12:54 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/09 14:50:48 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Reproduce the behavior of the function strcat (man strcat).

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	ds_count;

	i = 0;
	ds_count = ft_strlen(dest);
	if (!src || !dest)
	{
		return (dest);
	}
	while (src[i] != '\0')
	{
		dest[ds_count + i] = src[i];
		i++;
	}
	dest[ds_count + i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char dest[50] = "Hello, ";
	char src[] = "test";

	// output : "Hello, test"
	return (0);
}
*/

/* Notes
	• I created a function ft_strlen where i count the amount of caracters of
	a string.
	• line 37 : we check if src or dest exist if not then return dest
*/
