/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:49:33 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/21 13:27:48 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *string1;
	unsigned char *string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while (*string1 == *string2 && *string1 && *string2 && n > 0)
	{
		string1++;
		string2++;
		n--;
	}
	if (*string1 != *string2)
		return (*string1 - *string2);
	return (0);
}
