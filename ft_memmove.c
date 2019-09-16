/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:13:41 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/16 19:20:16 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memmove(void *adestination, const void *asource, size_t n)
{
	char *source;
	char temp_array[n];

	source = (char *)asource;
	ft_strncpy(temp_array, source, n);
	ft_strncpy(adestination, temp_array, n);
	return (adestination);
}
