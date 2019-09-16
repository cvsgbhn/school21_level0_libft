/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:09:14 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/16 19:10:24 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *destination;
	unsigned char *source;

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n > 0 && c > 0)
	{
		*destination = *source;
		destination++;
		source++;
		n--;
		c--;
	}
	return (destination);
}
