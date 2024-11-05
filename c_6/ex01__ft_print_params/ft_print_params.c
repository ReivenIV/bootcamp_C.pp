/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:29:22 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/18 14:51:16 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 01
ft_print_params
Turn-in directory : ex01/
Files to turn in : ft_print_params.c
Allowed functions : write

• We’re dealing with a program here, you should therefore have a function main in
your .c file.
• Create a program that displays its given arguments.
• One per line, in the same order as in the command line.
• It should display all arguments, except for argv[0].

• Example :
$>./a.out test1 test2 test3 | cat -e
test1$
test2$
test3$
$>

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

void	pr_all(char **str, int amount)
{
	int	i;

	i = 1;
	while (i < amount)
	{
		print(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	pr_all(argv, argc);
	return (0);
}

// will output in the terminal all the argument excluding a.out