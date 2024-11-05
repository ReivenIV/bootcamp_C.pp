/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:13:56 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/19 15:41:09 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
 • Create a function which sorts an array of integers by ascending order.
 • The arguments are a pointer to int and the number of ints in the array.
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	if (size <= 0)
		return ;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	int	nb[5] = {55,88,90,66,11};
	int	size = 3;
	int i = 0;
	ft_sort_int_tab(nb, size);
	while(i < size)
	{
		printf("%d\n",nb[i]);
		i++;
	}
	return (0);
}
*/
