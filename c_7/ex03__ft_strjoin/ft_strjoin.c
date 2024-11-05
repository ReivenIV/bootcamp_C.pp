/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:31:37 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/25 11:58:37 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 03
ft_strjoin
Turn-in directory : ex03/
Files to turn in : ft_strjoin.c
Allowed functions : malloc

• Write a function that will concatenate all the strings pointed by strs separated by
sep.
• size is the number of strings in strs
• if size is 0, you must return an empty string that you can free().
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

// we count all strs (vectors) then we add amout of seps needed (size-1).
int	total_count(int size, char **strs, char *sep)
{
	int	i;
	int	tt_count;
	int	size_sep;

	i = 0;
	tt_count = 0;
	size_sep = ft_strlen(sep);
	while (i < size)
	{
		tt_count = tt_count + ft_strlen(strs[i]);
		i++;
	}
	tt_count = tt_count + (size_sep * (size - 1));
	return (tt_count);
}

// in every append we add '\0' to say to strlen when to stop counting
// otherwise we will have leak problems
char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	i;

	i = 0;
	count = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}

// joiner will join all vectors + seps using len & cat.
char	*joiner(int size, char *dest, char **strs, char *sep)
{
	int	i;
	int	count;

	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(dest, sep);
		}
		i++;
	}
	count = ft_strlen(dest);
	dest[count] = '\0';
	return (dest);
}

// will create dest with malloc then return dest with data inside.
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		tt_count;
	char	*dest;

	if (size < 0)
		return (NULL);
	if (size == 0)
	{
		dest = (char *)malloc((1) * sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	tt_count = total_count(size, strs, sep);
	dest = (char *)malloc((tt_count + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';
	joiner(size, dest, strs, sep);
	return (dest);
}
/*
#include <unistd.h>
int	main(void)
{
	char *strs[] = {
	"test1",
	"",
	"test"
	};
	char sep[] = "_xxx_";
	int	size = 3;
	char *test = ft_strjoin(size, strs, sep);
	int i= 0;

	while (test[i] != '\0')
	{
		write(1, &test[i], 1);
		i++;
	}

	free(test);
	return (0);
}*/
