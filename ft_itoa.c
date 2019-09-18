/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:56:11 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/18 18:18:18 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int		set_flag(int n)
{
	int flag;

	flag = 1;
	if (n < 0)
	{
		n *= -1;
		flag = -1;
	}
	return (flag);
}

char	*write_to_char(char *number, int n, int decimal, int count_size)
{
	int digit;

	while (decimal > 1)
	{
		digit = 1;
		decimal = decimal / 10;
		while (n - (decimal * digit) >= 0)
			digit++;
		number[count_size] = (digit - 1) + '0';
		count_size++;
		n = n - (decimal * (digit - 1));
	}
	return (number);
}

char	*ft_itoa(int n)
{
	int		count_size;
	int		decimal;
	int		digit;
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
