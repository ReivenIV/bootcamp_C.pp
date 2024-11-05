/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:01:04 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/09 14:53:13 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	• Reproduce the behavior of the function strcmp (man strcmp).
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
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
	char s1[] = "one";
	char s2[] = "oNe";
	return (0);
}
*/

/* MAN strcpm

strcmp() returns an integer indicating the result of the comparison:
	• 0, if the s1 and s2 are equal;
	• a negative value if s1 is less than s2;
	• a positive value if s1 is greater than s2.
*/

/* Personal thoughts
	• line 23: ""while (s1[i] || s2[i])"" if they exist then loop.
*/
