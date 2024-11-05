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