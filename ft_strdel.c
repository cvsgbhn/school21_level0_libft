/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:01:47 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/21 17:12:28 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	int		counter;
	int		length;
	void	*current_ptr;

	counter = 0;
	if (!as)
		free(as);
	length = ft_strlen((const char *)as);
	while (counter < length + 1)
	{
		current_ptr = as[counter];
		free(current_ptr);
		counter++;
	}
	free(as);
}
