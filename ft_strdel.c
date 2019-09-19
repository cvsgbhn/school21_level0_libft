/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:01:47 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/19 18:24:26 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_strdel(char **as)
{
	int		counter;
	int		length;
	void	*current_ptr;

	counter = 0;
	length = ft_strlen((const char *)as);
	while (counter < length + 1)
	{
		current_ptr = as[counter];
		free(current_ptr);
		counter++;
	}
	free(ap);
	return (**ap);
}
