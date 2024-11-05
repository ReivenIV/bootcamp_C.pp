/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:50:10 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/09/19 12:56:32 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create a function that counts and returns the number of characters in a string.
• Here’s how it should be prototyped :
*/
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*
int	main(void)
{
	ft_strlen("I can do it");
	return (0);
}
*/
