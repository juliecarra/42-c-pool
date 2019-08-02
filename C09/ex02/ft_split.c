/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:04:19 by jucarra           #+#    #+#             */
/*   Updated: 2019/07/23 10:51:28 by jucarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_is_separator(str[i], charset))
			i++;
		if (str[i] && !ft_is_separator(str[i], charset))
		{
			while (str[i] && !ft_is_separator(str[i], charset))
				i++;
			count++;
		}
	}
	return (count);
}

char	*ft_strdup(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !ft_is_separator(str[i], charset))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_is_separator(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**tab;

	i = 0;
	tab = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	while (*str)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		if (*str && !ft_is_separator(*str, charset))
		{
			tab[i] = ft_strdup(str, charset);
			i++;
			while (*str && !ft_is_separator(*str, charset))
				str++;
		}
	}
	tab[i] = 0;
	return (tab);
}
