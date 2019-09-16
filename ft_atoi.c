/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:39:58 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/16 14:13:29 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int counter;
	int flag;
	int result;

	counter = 0;
	flag = 1;
	result = 0;
	while (str[counter] == ' ' || (str[counter] >= '\t' && str[counter] <= '\r'))
		counter++;
	if(str[counter] == '+' && str[counter + 1] >= '0' && str[counter + 1] <= '9')
		counter++;
	if (str[counter] == '-')
	{
		flag = -1;
		counter++;
	}
	while (str[counter])
	{
		if (str[counter] < '0' || str[counter] > '9')
		   return (result * flag);
		result = result * 10 + (str[counter] - '0');
		counter++;		
	}
	result = result * flag;
	return (result);
}
