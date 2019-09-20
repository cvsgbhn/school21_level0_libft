/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_min_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 15:02:00 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 15:02:28 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check_for_min_fd(int nb, int fd)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putnbr_fd(nb - 2000000000, fd);
	ft_putchar('\0');
	return ;
}