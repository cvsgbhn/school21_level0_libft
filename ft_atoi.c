/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:39:58 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/22 17:54:15 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int cntr;
	int flag;
	int result;

	cntr = 0;
	flag = 1;
	result = 0;
	while (str[cntr] == ' ' || (str[cntr] >= '\t' && str[cntr] <= '\r'))
		cntr++;
	if (str[cntr] == '+' && str[cntr + 1] >= '0' && str[cntr + 1] <= '9')
		cntr++;
	if (str[cntr] == '-')
	{
		flag = -1;
		cntr++;
	}
	while (str[cntr])
	{
		if (str[cntr] < '0' || str[cntr] > '9')
			return (result * flag);
		result = result * 10 + (str[cntr] - '0');
		cntr++;
	}
	result = result * flag;
	return (result);
}
