/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:03:19 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/19 13:12:59 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
• Create a function which reverses a given array of integer
(first goes last, etc).
• The arguments are a pointer to int and the number of ints in the array.
• Here’s how it should be prototyped :
*/

void	ft_swap(int *a, int *b)
{
	int	saved_int;

	saved_int = *a;
	*a = *b;
	*b = saved_int;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
/*
int	main(void)
{
	int arr[6] = {1,2,3,4,5,6};
	int	size = 6;
	ft_rev_int_tab(arr, size);
	    for (int j = 0; j < size; j++) {
		arr[j] // Print each element
    }

	return (0);
}
*/
