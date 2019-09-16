/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:30:13 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/16 19:30:44 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strlcat(char *destination, const char *const_src, size_t number)
{
	char	*end_of_dest;
	int		counter;

	counter = 0;
	while (destination[counter])
		counter++;
	end_of_dest = &(destination[counter]);
	ft_memcpy(end_of_dest, const_src, number);
	return (number + counter + 1);
}
