/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:56:11 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 14:57:15 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		count_size;
	int		decimal;
	int		flag;
	char	*number;

	count_size = 1;
	decimal = 10;
	flag = set_flag(n);
	flag < 0 ? n *= -1 : n;
	flag < 0 ? count_size++ : count_size;
	while (n / decimal > 0)
	{
		count_size++;
		decimal *= 10;
	}
	number = (char *)malloc((count_size + 1) * sizeof(char));
	if (!number)
		return (0);
	number[count_size] = '\0';
	count_size = 0;
	flag < 0 ? number[0] = '-' : number[0];
	flag < 0 ? count_size++ : count_size;
	number = write_to_char(number, n, decimal, count_size);
	return (number);
}
