/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:19:48 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 14:35:59 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		length;
	int		counter;
	char	*f_results;

	length = ft_strlen(s);
	counter = 0;
	f_results = (char *)malloc(sizeof(char) * (length + 1));
	while (*s)
	{
		f_results[counter] = f(*s);
		counter++;
		s++;
	}
	f_results[counter] = '\0';
	return (f_results);
}
