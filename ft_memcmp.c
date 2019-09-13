/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:40:42 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/13 18:58:14 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n )
{
	char *string1;
	char *string2;

	string1 = (char *)str1;
	string2 = (char *)str2;
	if (!string1 || !string2)
		return(0);
	while (*string1 && *string2 && n > 0)
	{
		if (*string1 != *string2)
			return (*string1 - *string2);
		string1++;
		string2++;
		n--;
	}
	return (0);
}
