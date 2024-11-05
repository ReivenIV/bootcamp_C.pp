/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:33:40 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/25 15:52:54 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	counter(char c)
{
	int	count;

	count = 0;
	if (c >= 'a' && c <= 'z')
		count = c - 'a' + 1;
	if (c >= 'A' && c <= 'Z')
		count = c - 'A' + 1;
	//printf("in counter = %d\n", count);
	return (count);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	//printf("printer = %s\n", argv[1]);
	int	count;
	int	i;

	i = 0;
	while (argv[1][i])
	{
		//printf("i = %c\n", argv[1][i]);
		count = counter(argv[1][i]);
		while (count > 0)
		{
			write(1, &argv[1][i], 1);
			count--;
		}
		i++;
	}
	write (1, "\n", 1);

	return (0);
}
