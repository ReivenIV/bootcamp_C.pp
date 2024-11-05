/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:22:22 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/18 14:50:54 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 00

ft_print_program_name
Turn-in directory : ex00/
Files to turn in : ft_print_program_name.c
Allowed functions : write

• We’re dealing with a program here, you should therefore have a function main in
your .c file.
• Create a program that displays its own name followed by a new line.
• Example :
$>./a.out | cat -e
./a.out$
$>
*/

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