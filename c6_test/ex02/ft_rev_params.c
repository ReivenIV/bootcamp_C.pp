/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:26:28 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/20 10:42:38 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	plen(char *str)
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

void	p_params(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	printf("argc = %d\n", argc);
	while (i >= 0)
	{
	 	printf("argc[%d] == %s\n",i, argv[i]);
		plen(argv[i]);

		i--;
	}
}

int	main(int argc, char **argv)
{
	p_params(argc, argv);
	return (0);
}
