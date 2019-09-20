/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:30:13 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 19:22:33 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcat(char *dest, const char *const_src, size_t number)
{
	char	*end_of_dest;
	size_t	counter;

	counter = 0;
	while (dest[counter])
		counter++;
	end_of_dest = &(dest[counter]);
	ft_memcpy(end_of_dest, const_src, number);
	return ((size_t *)(number + counter + 1));
}
