/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:26:35 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 14:07:58 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	int		counter;
	int		length;
	void	*current_ptr;

	counter = 0;
	length = ft_strlen((const char *)ap);
	while (counter < length / 2)
	{
		current_ptr = ap[counter];
		free(current_ptr);
		counter++;
	}
	free(ap);
	return (**ap);
}
