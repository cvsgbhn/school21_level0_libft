/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:19:24 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/18 14:20:43 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int		ft_count_whitespaces(char const *s)
{
	int counter;

	counter = 0;
	while (*s)
	{
		if (*s == ' ' || *s == '\t' || *s == '\n')
			counter++;
		s++;
	}
	return (counter);
}

char	*ft_strtrim(char const *s)
{
	size_t	new_length;
	int		index_copy;
	int		index;
	char	*copy;

	index = 0;
	index_copy = 0;
	new_length = strlen(s) - ft_count_whitespaces(s);
	copy = (char *)malloc(sizeof(char) * new_length);
	if (!copy)
		return (0);
	while (s[index])
	{
		if (s[index] != ' ' && s[index] != '\t' && s[index] != '\n')
		{
			copy[index_copy] = s[index];
			index_copy++;
		}
		index++;
	}
	return (copy);
}
