/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:52:58 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/13 09:53:33 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Reproduce the behavior of the function strncmp (man strncmp).

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] - s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char s1[] = "oneeeeeeeee";
	char s2[] = "one";
	unsigned int n = 10;
	return (0);
}
*/
