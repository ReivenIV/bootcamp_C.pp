/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:22:22 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/18 14:50:54 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *str)
{
	int		i;
	char	jump;

	i = 0;
	jump = '\n';
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, &jump, 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	print(*argv);
	return (0);
}

// Will output only a.out in the terminal