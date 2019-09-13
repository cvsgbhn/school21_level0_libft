/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:46:28 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/13 19:01:43 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char *	ft_strncpy(char *destination, char *source, int len)
{
	while (*source && len > 0)
	{
		*destination = *source;
		destination++;
		source++;
		len--;
	}
	*destination = '\0';
	return (destination);
}
