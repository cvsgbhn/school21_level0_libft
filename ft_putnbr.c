/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:13:26 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 15:01:04 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int counter;
	int a_nb[10];

	counter = 0;
	if (nb == -2147483648)
	{
		check_for_min(nb);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	while (nb / 10 >= 0.001)
	{
		a_nb[counter] = nb % 10;
		nb = (nb - nb % 10) / 10;
		counter++;
	}
	a_nb[counter] = nb % 10;
	while (counter-- >= 0)
	{
		ft_putchar(a_nb[counter] + '0');
	}
}
