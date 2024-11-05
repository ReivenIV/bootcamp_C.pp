/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:46:40 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/25 09:59:41 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_strdup
Turn-in directory : ex00/
Files to turn in : ft_strdup.c
Allowed functions : malloc

• Reproduce the behavior of the function strdup (man strdup).
*/

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		i;
	int		count;
	char	*copy;

	if (src == NULL)
		return (NULL);
	i = 0;
	count = ft_strlen(src);
	copy = (char *)malloc((count * sizeof(char)) + 1);
	if (copy == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
int	main(void)
{
	char *src = "test";
	char *dest;
	dest = ft_strdup(src);
	printf("%s", dest);
	return (0);
}
*/
