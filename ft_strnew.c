/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:40:52 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/21 13:58:13 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*string;
	int		length;

	string = (char *)malloc(sizeof(char) * size);
	if (!string)
		return (NULL);
	ft_memset(string, 0, sizeof(char) * size);
	length = size;
	string[length - 1] = '\0';
	return (string);
}
