/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:01:25 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/09 16:23:58 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char*	ft_strchr(const char *string, int symbol)
{
	int counter;

	counter = 0;
	while (symbol != string[counter])
		{
			counter++;
			if (symbol == string[counter])
				return(string[counter]);
		}	
	return (0);
}
