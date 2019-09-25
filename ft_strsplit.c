/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:21:35 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/25 12:11:53 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		words_amount;
	int		chars_in_word;
	int		index;
	char	**main_array;

	if (!s)
		return (NULL);
	index = 0;
	words_amount = ft_count_words(s, c);
	main_array = (char **)malloc(sizeof(char *) * (words_amount + 1));
	if (words_amount + 1 < words_amount || !main_array)
		return (0);
	while (index < words_amount && *s)
	{
		while (*s == c)
			s++;
		chars_in_word = ft_count_chars(s, c);
		if (!(main_array[index] = (char *)malloc(sizeof(char) * chars_in_word)))
			return (0);
		ft_strncpy(main_array[index], s, chars_in_word);
		s += chars_in_word;
		index++;
	}
	main_array[index] = NULL;
	return (main_array);
}
