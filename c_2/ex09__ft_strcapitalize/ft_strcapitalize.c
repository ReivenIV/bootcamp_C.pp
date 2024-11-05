/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:58:07 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/10 10:11:41 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 09
ft_strcapitalize
Turn-in directory : ex09/
Files to turn in : ft_strcapitalize.c
Allowed functions : None

• Create a function that capitalizes the first letter of each word and transforms all
other letters to lowercase.
• A word is a string of alphanumeric characters.
• It should return str.

• For example:
	salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
• Becomes:
	Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if (! (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
			&& !(str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	test[] = "salut, coeRNt ;tu vAs ? 42mots qunte-d; cinnte+et+un";
	return (0);
}
*/

/*
	• line 25-28 : if lower case then we turn the first one to upper case
	• line 31-34 : we turn all maj to lower case
	• line 35-38 : if not a-z, A-Z, 1-9.
			• if a-z then turn it to maj.
*/
