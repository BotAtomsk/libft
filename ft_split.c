/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgacho <rgacho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:34:09 by rgacho            #+#    #+#             */
/*   Updated: 2023/07/29 16:18:51 by rgacho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	*get_word(const char *s, char c, int *start)
{
	int		end;
	char	*word;
	int		i;

	while (s[*start] == c)
		(*start)++;
	end = *start;
	while (s[end] && s[end] != c)
		end ++;
	word = (char *)malloc(sizeof(char) * ((end - *start) + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (*start < end)
		word[i++] = s[(*start)++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		start;
	int		count;

	count = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	i = 0;
	start = 0;
	while (i < count)
	{
		split[i] = get_word(s, c, &start);
		if (!split[i])
		{
			while (i > 0)
				free(split[--i]);
			free(split);
			return (NULL);
		}
		i++;
	}
	split[i] = NULL;
	return (split);
}
