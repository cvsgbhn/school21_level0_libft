/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:45:43 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 14:07:13 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char *chrr_string;

	chrr_string = (char *)str;
	while (chrr_string[0] && n > 0)
	{
		if (chrr_string[0] == c)
			return (chrr_string);
		chrr_string++;
		n--;
	}
	if (chrr_string[0] == c)
	  return(chrr_string);
	return (NULL);
}
