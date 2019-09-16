/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:49:33 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/16 19:52:57 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int		ft_strncmp(const char *s1, const char *s2, int n)
{
	while (*s1 == *s2 && *s1 && *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
}
