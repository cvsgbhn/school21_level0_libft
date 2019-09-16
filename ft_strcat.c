/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:12:01 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/16 19:15:11 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strcat(char *destination, const char *const_src)
{
	char	*end_of_dest;
	int		counter;

	counter = 0;
	while (destination[counter])
		counter++;
	end_of_dest = &(destination[counter]);
	ft_memcpy(end_of_dest, const_src, ft_strlen(const_src));
	return (destination);
}
