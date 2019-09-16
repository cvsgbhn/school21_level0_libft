/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:03:27 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/16 19:51:44 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

size_t	ft_strlen(const char *str)
{
	size_t counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}
