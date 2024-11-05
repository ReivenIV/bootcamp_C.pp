/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:32:12 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/16 17:04:25 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create a function ft_fibonacci that returns the n-th element 
	of the Fibonacci sequence, the first element being at the 0 index. 
	We’ll consider that the Fibonacci sequence starts like this: 0, 1, 1, 2.
• Overflows must not be handled, the function return will be undefined.
• Obviously, ft_fibonacci has to be recursive.
• If the index is less than 0, the function should return -1.
*/
int	ft_fibonacci(int index)
{
	int	res;
	int	fi;

	res = 0;
	fi = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index > 0)
	{
		res = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	}
	res = res + fi;
	return (res);
}
/*
int	main(void)
{
    ft_fibonacci(10);
	return (0);
}
*/
