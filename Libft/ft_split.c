/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufreder <lufreder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:04:13 by lucilla           #+#    #+#             */
/*   Updated: 2023/11/15 17:39:55 by lufreder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char	*str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (*str != '\0')
	{
		if (*str != c)
		{
			count = 1;
			i++;
		}
		else if (*str == c)
			count = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/*#include <stdio.h>

int main() 
{
    const char *input_string = "Ceci est un exemple de texte à découper.";
    char delimiter = 'x';

    char **result = ft_split(input_string, delimiter);

    if (result) {
        int i = 0;
        while (result[i]) {
            printf("Mot %d : %s\n", i, result[i]);
            free(result[i]); 
            i++;
        }
        free(result); 
    } else {
        printf("Échec de l'allocation mémoire.\n");
    }

    return 0;
}
*/