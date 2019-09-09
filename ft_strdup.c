/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:04:30 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/09 14:38:41 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strcpy(char *string1, char *string2)
{
	while (*string1 && *string2)
	{
		*string2 = *string1;
		string1++;
		string2++;
	}
	return (string2);
}

char	*ft_strdup(char *src)
{
	char *copy;

	copy = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!copy)
		return ("");
	ft_strcpy(copy, src);
	return (src);
}
