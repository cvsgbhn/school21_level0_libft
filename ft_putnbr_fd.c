/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:58:45 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/19 17:57:10 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_putnbr_fd(int nb, int fd);

void	check_for_min(int nb, int fd)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putnbr_fd(nb - 2000000000, fd);
	ft_putchar('\0');
	return ;
}

void	ft_putnbr_fd(int nb, int fd)
{
	int counter;
	int a_nb[10];

	counter = 0;
	if (nb == -2147483648)
	{
		check_for_min(nb, fd);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
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
		ft_putchar_fd(a_nb[counter] + '0', fd);
	}
}
