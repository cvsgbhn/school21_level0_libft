/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:56:11 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/17 20:10:40 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char    *ft_itoa(int n)
{
  int count_size;
  int decimal;
  int digit;
  int flag;
  char *number;
  
  count_size = 1;
  decimal = 10;
  flag = 1;
  if (n < 0)
  {
	count_size++;
	n *= -1;
	flag = -1;
  }
  while (n / decimal > 0)
  {
    count_size++;
    decimal *= 10;
  }
  number = (char *)malloc((count_size + 1) * sizeof(char));
  if (!number)
  {
	return (0);
  }
  number[count_size] = '\0';
  count_size = 0;
  if (flag == -1)
  {
	number[0] = '-';
	count_size++;
  }
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

int   main(void)
{
  char *num;
  num = ft_itoa(586);
  return (0);
}
