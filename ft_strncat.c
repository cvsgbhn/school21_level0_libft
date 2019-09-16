/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:27:34 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/16 19:28:26 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strncat(char *destination, const char *const_src, size_t number)
{
	char	*end_of_dest;
	int		counter;

	counter = 0;
	while (destination[counter])
		counter++;
	end_of_dest = &(destination[counter]);
	ft_memcpy(end_of_dest, const_src, number);
	return (destination);
}
