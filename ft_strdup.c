/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:04:30 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/16 19:50:53 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strdup(const char *src)
{
	char *copy;

	copy = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!copy)
		return ("");
	ft_strcpy(copy, src);
	return (src);
}
