/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:46:50 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/18 14:51:38 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 02
ft_rev_params
Turn-in directory : ex02/
Files to turn in : ft_rev_params.c
Allowed functions : write

• We’re dealing with a program here, you should therefore have a function main in
your .c file.
• Create a program that displays its given arguments.
• One per line, in the reverse order of the command line.
• It should display all arguments, except for argv[0].
*/

#include <unistd.h>

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	pr_rall(int amount, char **argv)
{
	int	i;

	i = amount - 1;
	while (i >= 1)
	{
		print(argv[i]);
		i--;
	}
}

int	main(int argc, char **argv)
{
	pr_rall(argc, argv);
	return (0);
}

// will output in the terminal all the argument excluding a.out (reversed)