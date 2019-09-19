/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:33:15 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/19 19:58:15 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	unsigned int		counter;

	counter = 0;
	while (counter < start)
	{
		s++;
		counter++;
	}
	substring = (char *)malloc(sizeof(char) * len);
	substring = ft_strncpy(substring, s, len);
	return (substring);
}
