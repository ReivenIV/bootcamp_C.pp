/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:05:07 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/18 14:59:17 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 03
ft_sort_params
Turn-in directory : ex03/
Files to turn in : ft_sort_params.c
Allowed functions : write

• We’re dealing with a program here, you should therefore have a function main in
your .c file.
• Create a program that displays its given arguments sorted by ascii order.
• It should display all arguments, except for argv[0].
• One argument per line.
*/

#include <unistd.h>

// will print all arguments of argv avoiding a.out (i = 1)
void	p_all(int amount, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < amount)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}

// will count length of the string.
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

// will compare caracter by caracter of 2 strings if mismatch s1-s2
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (ft_strlen(s1) == 0 && ft_strlen(s2) == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// we will swap entire strings we put char** because we are handling argv
void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// will order and output all ordered arguments
// will sort using strcmp and swap.
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i = 0;
		}
		i++;
	}
	p_all(argc, argv);
	return (0);
}

// will output in the terminal all sorted argument excluding a.out