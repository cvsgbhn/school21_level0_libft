/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:59:14 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 14:33:11 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	int		sum_len;
	char	*concatenated;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	concatenated = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	ft_strcat((char *)s1, (char *)s2);
	ft_strcpy(concatenated, s1);
	sum_len = len_s1 + len_s2;
	concatenated[sum_len] = '\0';
	return (concatenated);
}
