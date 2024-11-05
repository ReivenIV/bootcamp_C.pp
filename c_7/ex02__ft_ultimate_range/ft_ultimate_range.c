/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:00:22 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/25 10:38:40 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
Exercise 02
ft_ultimate_range
Turn-in directory : ex02/
Files to turn in : ft_ultimate_range.c
Allowed functions : malloc

• Create a function ft_ultimate_range which allocates and assigns an array of ints.
This int array should contain all values between min and max.
• Min included - max excluded.
• The size of range should be returned (or -1 on error).
• If the value of min is greater or equal to max’s value, range will point on NULL
and it should return 0.
*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_len;
	int	*values;
	int	i;

	if (min >= max)
		return (0);
	range_len = max - min;
	values = (int *)malloc(range_len * sizeof(int));
	if (values == NULL)
		return (0);
	i = 0;
	while (i < range_len)
	{
		values[i] = i + min;
		i++;
	}
	range[0] = values;
	return (range_len);
}
/*
#include <stdio.h>
int	main(void)
{
	// we need to allocate some ram the the **test otherwise we ll have
	// segment fault.
	int	*test = NULL;
	int	min = 0;
	int	max = 10;
	int	size = ft_ultimate_range(&test, min, max);

	for (int i = 0; i < 9; i++)
	{
		printf("test[%d] = %d\n", i, test[i]);
	}
	free(test);
	return (0);
}
*/
