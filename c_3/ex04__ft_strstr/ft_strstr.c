/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:40:48 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/11 12:54:04 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// • Reproduce the behavior of the function strstr.

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find || to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char str[50] = "aaaabc_123";
	char to_find[] = "abc";
	// outputi should be : "abc_123"
	return (0);
}
*/
/* Personal notes
	• In these exercice we have 2 loops because we need to go check
	  str and to_find. the 1L will run the string & 2L will run if there is a
	  match`
	• Line 25 : if to_find is NULL or "" ("" = '\0') then we return str
	• Line 30 : when we have the first finding we start comparing and
	  looping with i+j. If the comparations end with to_find \0
	  we can say the match is complet and we return &str[i].
	• Line 35 : &str[i] will not destroy the value will just return
	  the information. IMPORTANT ^
	• Line 38 : In case the match is not complet we restart j=0
	  like that the next loop we can make the comparation correctly.

	• HINT : because these is an existing func you can use it to
			 see the real behavior & compare it if there is a match.
*/
