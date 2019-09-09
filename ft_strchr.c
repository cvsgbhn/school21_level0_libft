/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:01:25 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/09 16:45:10 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

const char*		ft_strchr(const char *string, int symbol)
{
	int counter;
	char *copy_string;

	*copy_string = strcpy(
	counter = 0;
	while (counter < len)
		{
			if (string[counter] == symbol)
				return(&string[counter]);
			counter++;
		}	
	return (0);
}
