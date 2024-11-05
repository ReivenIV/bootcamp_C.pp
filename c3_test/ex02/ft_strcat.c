/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:37:42 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/19 20:02:47 by fwebe-ir         ###   ########.fr       */
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
	while (str[i] != '\0')
	{
		
	}
}

int	main(void)
{
	char	s1[] = "qweRtyuio";
	char	s2[] = "qwertyuio";
	int		size = 3;
	printf("%d\n", ft_strstr(s1, s2, size));
	printf("%d\n", strstr(s1, s2, size));
	return (0);
}

