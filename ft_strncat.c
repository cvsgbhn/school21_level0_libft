/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:26:15 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/13 18:59:41 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strcat(char *destination, const char *const_src, size_t number)
{
	char *end_of_dest;
	int counter;

	counter = 0;
	while(destination[counter])
		counter++;
	end_of_dest = &(destination[counter]);
	ft_memcpy(end_of_dest, const_src, number);
	return (destination);
}
