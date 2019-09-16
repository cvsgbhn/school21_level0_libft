/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:46:28 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/16 19:25:11 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strcpy(char *destination, const char *source)
{
	while (*source)
	{
		*destination = *source;
		destination++;
		source++;
	}
	*destination = '\0';
	return (destination);
}
