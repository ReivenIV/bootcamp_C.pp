/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:04:05 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/20 10:22:53 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[i] == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] ==  to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}

		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "jjo";
	char	tf[] = "";

	printf("ft : %s\n", ft_strstr(str, tf));
	printf("rft :%s", strstr(str, tf));
	return (0);
}
