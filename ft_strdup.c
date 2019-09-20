/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:04:30 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 14:11:56 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *copy;

	copy = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!copy)
		return ("");
	ft_strcpy(copy, src);
	return ((char *)src);
}
