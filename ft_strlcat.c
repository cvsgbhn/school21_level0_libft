/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:30:13 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/21 18:57:43 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count_size;
	size_t	counter;

	count_size = 0;
	if (dst == src)
		return(ft_strlen(dst) + 1);
	while (dst[count_size] && count_size < size)
		count_size++;
	if (count_size == size)
		return (size + ft_strlen(src));
	counter = count_size;
	while (counter < size - 1 && src[counter])
	{
		dst[counter] = src[counter - count_size];
		counter++;
	}
	dst[counter] = '\0';
	return ((size + counter));
}
