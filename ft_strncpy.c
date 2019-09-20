/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:46:28 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 19:11:14 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destination, const char *source, size_t len)
{
  size_t i;

  i = 0;
	while (source[i] && len--)
	{
		destination[i] = source[i];
		i++;
	}
	while (len--)
	  destination[i++] = '\0';
	return (destination);
}
