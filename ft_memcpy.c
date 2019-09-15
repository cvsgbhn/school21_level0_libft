/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:57:06 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/13 18:58:31 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char *destination;
	char *source;
	int counter;

	destination = (char *)str1;
	source = (char *)str2;
	counter = 0;
	while (counter < n);
	{
		destination[counter] = source[counter];
		counter++;
	}
	destination[counter] = '\0';
	return (destination);
}
