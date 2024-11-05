/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:23:15 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/25 17:35:54 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] != 9 && argv[1][i] != 32)
		{
			write (1, &argv[1][i], 1);
			if (argv[1][i + 1] == 9 || argv[1][i + 1] == 32
				|| argv[1][i + 1] == '\0')
				return (0);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

/*

 	char text[] = "hello world"

	char *text;

	text = (char *)malloc((12 + 1) * size(char));
	if (test == NULL)
	{
		return (0);
	}
	text = argv[1]


	char **tabdtab;

	tabdtab = (char **)malloc((5 + 1) *sizeof(char *));

 */
