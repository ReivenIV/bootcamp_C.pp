/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:21:55 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/25 10:14:52 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
ft_range
Turn-in directory : ex01/
Files to turn in : ft_range.c
Allowed functions : malloc

• Create a function ft_range which returns an array ofints.
  This int array should contain all values between min and max.
• Min included - max excluded.
• If min´value is greater or equal to max’s value, a null
  pointer should be returned.
*/
int	*ft_range(int min, int max)
{
	int	range;
	int	*ints;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	range = max - min;
	ints = (int *)malloc(range * sizeof(int));
	if (ints == NULL)
		return (NULL);
	while (i < range)
	{
		ints[i] = i + min;
		i++;
	}
	return (ints);
}

/*
#include <stdio.h>
int	main(void)
{
	int	min = 2;
	int	max = 9;
	int i = 0;
	int *test;

	test = ft_range(min, max);
	while (i < max - min)
	{
	printf("%d\n", test[i]); // output : 2,3,4,5,6,7,8
		i++;
	}
	free(test);
	return (0);
}
*/
