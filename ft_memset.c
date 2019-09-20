/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:59:34 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 14:08:25 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char *true_str;

	true_str = (unsigned char *)str;
	while (n > 0)
	{
		*true_str = c;
		true_str++;
		n--;
	}
	return (true_str);
}
