/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op_v2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 16:33:21 by angavrel          #+#    #+#             */
/*   Updated: 2024/09/26 18:44:47 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if  (argc == 4)
	{
		if (*argv[2] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		else if (*argv[2] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		else if (*argv[2] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		else if (*argv[2] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		else if (*argv[2] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
	return (0);
}