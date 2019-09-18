/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:21:35 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/18 16:40:35 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int		ft_count_words(char const *s, char c)
{
	int counter;
	int index;

	counter = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] != c && (s[index - 1] == c || index == 0))
			counter++;
		index++;
	}
	return (counter);
}

int		ft_count_chars(char const *s, char c)
{
	int counter;

	counter = 0;
	while (*s)
	{
		if (*s == c)
			return (index);
		counter++;
		s++;
	}
	return (index);
}

char	**ft_strsplit(char const *s, char c)
{
	int		words_amount;
	int		chars_in_word;
	int		index;
	char	**main_array;

	index = 0;
	words_amount = ft_count_words(s, c);
	main_array = (char **)malloc(sizeof(char *) * words_amount);
	if (!main_array)
		return (0);
	while (index < words_amount && *s)
	{
		while (*s == c)
			s++;
		chars_in_word = ft_count_chars(s, c);
		main_array[index] = (char *)malloc(sizeof(char) * chars_in_word);
		strncpy(main_array[index], s, chars_in_word);
		s += chars_in_word;
		index++;
	}
	return (main_array);
}
