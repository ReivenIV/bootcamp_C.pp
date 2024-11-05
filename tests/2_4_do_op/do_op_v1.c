/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:28:09 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/26 18:43:35 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	int	nb1;
	int	nb2;

	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[3]);
	if (argv[2][0] == '+')
		printf("%d\n", nb1 + nb2);
	if (argv[2][0] == '*')
		printf("%d\n", nb1 * nb2);
	if (argv[2][0] == '/')
		printf("%d\n", nb1 / nb2);
	if (argv[2][0] == '%')
		printf("%d\n", nb1 % nb2);

	return (0);
}
