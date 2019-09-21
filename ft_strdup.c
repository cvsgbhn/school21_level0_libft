/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:04:30 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/21 12:02:45 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *copy;

	copy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!copy)
		return (NULL);
	ft_strcpy(copy, s1);
	return ((char *)copy);
}
