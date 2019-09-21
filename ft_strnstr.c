/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:22:11 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/21 19:04:50 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_counter;
	int		n_counter;
	char	*ft_hstk;
	char	*ft_ndl;

	h_counter = 0;
	ft_hstk = (char *)haystack;
	ft_ndl = (char *)needle;
	if (haystack == needle)
		return ((char *)haystack);
	while (ft_hstk[h_counter] && h_counter < len - 1)
	{
		n_counter = 0;
		while (ft_hstk[h_counter] == ft_ndl[n_counter] && ft_ndl[n_counter])
		{
			h_counter++;
			n_counter++;
		}
		h_counter -= n_counter;
		if (ft_ndl[n_counter] == '\0')
			return (&(ft_hstk[h_counter]));
		h_counter++;
	}
	return (NULL);
}
