/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:39:38 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 14:14:20 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int symbol)
{
	char	*pointer;
	char	*restr;
	int		counter;

	restr = (char *)str;
	counter = 0;
	while (restr[counter])
	{
		if (restr[counter] == symbol)
			pointer = &(restr[counter]);
		counter++;
	}
	return (pointer);
}
