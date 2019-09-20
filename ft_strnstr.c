/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:22:11 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 14:31:47 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h>"

char	*ft_strnstr(const char *hstck, const char *ndl)
{
	int		h_counter;
	int		n_counter;
	char	*ft_hstk;
	char	*ft_ndl;

	h_counter = 0;
	ft_hstk = (char *)hstck;
	ft_ndl = (char *)ndl;
	while (ft_hstk[h_counter] && h_counter < h_length)
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
	return (0);
}
