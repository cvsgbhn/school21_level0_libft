/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:01:25 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/13 19:00:08 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int		ft_strlen(char *str);

const char*		ft_strchr(const char *string, int symbol)
{
	int counter;
	int len;
	char *copy_string;

	copy_string = (char *)string;
    len = ft_strlen(copy_string);
	counter = 0;
	while (counter < len)
		{
			if (string[counter] == symbol)
				return(&string[counter]);
			counter++;
		}	
	return (0);
}
