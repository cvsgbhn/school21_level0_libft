/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:33:15 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/21 16:35:55 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	counter;

	counter = 0;
	if (!s || len == 0)
		return (NULL);
	while (counter < start)
	{
		s++;
		counter++;
	}
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	substring = ft_strncpy(substring, s, len);
	substring[len] = '\0';
	return (substring);
}
