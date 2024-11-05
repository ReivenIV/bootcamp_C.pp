/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:37:46 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/19 19:36:53 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	len(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;


//	if (len(s1) < n && len(s2) < n)
//	{
//		return (0);
//	}

	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	s1[] = "qweRtyuio";
	char	s2[] = "qwertyuio";
	int		size = 3;
	printf("%d\n", ft_strncmp(s1, s2, size));
	printf("%d\n", strncmp(s1, s2, size));
	return (0);
}

