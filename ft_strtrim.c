/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:19:24 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/22 16:42:23 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	length;
	size_t	index1;
	size_t	index2;
	char	*copy;

	if (!s)
		return (NULL);
	index1 = 0;
	length = ft_strlen((const char *)s);
	while (s[index1] == ' ' || s[index1] == '\t' || s[index1] == '\n')
		index1++;
	if (index1 == length)
		return (ft_strnew(0));
	while (s[length - 1] == ' '|| s[length - 1] == '\t' || s[length - 1] == '\n')
		length--;
	if( !(copy = ft_strnew(length - index1)))
			return (NULL);
	index2 = 0;
	while (index1 < length)
	{
		copy[index2++] = s[index1++];	
	}
	copy[index2] = '\0';
	return (copy);
}
