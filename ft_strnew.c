/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:40:52 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/19 18:50:38 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strnew(size_t size)
{
	char	*string;
	int		length;

	string = (char *)malloc(sizeof(char) * size);
	length = size;
	string[length - 1] = '\0';
	return (string);
}
