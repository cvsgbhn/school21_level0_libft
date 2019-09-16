/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:39:38 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/16 19:39:52 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strrchr(const char *str, int symbol)
{
	char	*pointer;
	int		counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] == symbol)
			pointer = str[counter];
		counter++;
	}
	return (pointer);
}
