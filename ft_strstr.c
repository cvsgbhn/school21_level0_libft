/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:35:59 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 14:14:31 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		h_count;
	int		n_count;
	char	*ft_haystack;
	char	*ft_needle;

	h_count = 0;
	ft_haystack = (char *)haystack;
	ft_needle = (char *)needle;
	while (ft_haystack[h_count])
	{
		n_count = 0;
		while (ft_haystack[h_count] == ft_needle[n_count] && ft_needle[n_count])
		{
			h_count++;
			n_count++;
		}
		h_count -= n_count;
		if (ft_needle[n_count] == '\0')
			return (&(ft_haystack[h_count]));
		h_count++;
	}
	return (0);
}
