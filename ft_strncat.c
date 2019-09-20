/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:27:34 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 14:29:51 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *const_src, size_t number)
{
	char	*end_of_dest;
	int		counter;

	counter = 0;
	while (dest[counter])
		counter++;
	end_of_dest = &(dest[counter]);
	ft_memcpy(end_of_dest, const_src, number);
	return (dest);
}
