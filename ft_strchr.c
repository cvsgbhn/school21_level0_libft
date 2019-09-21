/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:01:25 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/21 12:19:07 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strchr(const char *s, int c)
{
	int		counter;
	int		len;

	len = ft_strlen(s);
	counter = 0;
	while (counter < len)
	{
		if (s[counter] == c)
			return (&s[counter]);
		counter++;
	}
	if (s[counter] == c)
		return (&s[counter]);
	return (0);
}
