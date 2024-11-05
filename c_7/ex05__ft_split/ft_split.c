/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ReivenIV                                   +#+  +:+       +#+        */.
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:55:43 by ReivenIV          #+#    #+#             */
/*   Updated: 2024/09/25 12:07:27 by ReivenIV         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
Exercise 05
ft_split
Turn-in directory : ex05/
Files to turn in : ft_split.c
Allowed functions : malloc

• Create a function that splits a string of character depending on another string of
characters.
• You’ll have to use each character from the string charset as a separator.
• The function returns an array where each element of the array contains the address
of a string wrapped between two separators. The last element of that array should
equal to 0 to indicate the end of the array.
• There cannot be any empty strings in your array. Get your own conclusions ac-
cordingly.
• The string given as argument won’t be modifiable.
*/

/*The malloc +2 is because end-start is missing one caracter
	is end(6) - start(3) = 3. we are not counting the 0 and not the '\0' 
	(so we add +2)*/
char	*ft_strndup(char *str, int start, int end)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc((end - start + 2) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (start <= end)
		dest[i++] = str[start++];
	dest[i] = '\0';
	return (dest);
}

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;
	int	flag_word;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_charset(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] != '\0' && !is_charset(str[i], charset))
				i++;
		}
	}
	return (count);
}

/* Will search the start - end of each word then create the substrings 
witht the function fr_strndup*/
void	splitter(char **dest, char *str, char *charset)
{
	int	i;
	int	j;
	int	start;
	int	end;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_charset(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			start = i;
			while (str[i] != '\0' && !is_charset(str[i], charset))
				i++;
			end = i - 1;
			dest[j] = ft_strndup(str, start, end);
			j++;
		}
		dest[j] = NULL;
	}
}

// We create **dest and we create the sub strings with splitter
// if there are not words in the string we return dest with dest[0]= NULL
char	**ft_split(char *str, char *charset)
{
	char	**dest;

	if (!str || !charset)
		return (NULL);
	dest = (char **)malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (dest == NULL)
		return (NULL);
	if (count_words(str, charset) == 0)
	{
		dest[0] = NULL;
		return (dest);
	}
	splitter(dest, str, charset);
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
    char src[] = ",:;test,patate;;ananas,.,.salade,;:";
    char charset[] = ",:;.";
    char **result = ft_split(src, charset);
    int i = 0;

    // Print the word count
    printf("Word count: %d\n", count_words(src, charset));
    while (i < 5)
    {
        printf("res[%d] :: %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return (0);
}
*/