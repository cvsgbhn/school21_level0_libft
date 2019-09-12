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

char	*ft_strcpy(char *destination, char *source);

int		ft_strlen(char *str);

const char*		ft_strchr(const char *string, int symbol)
{
	int counter;
//	char *copy_string;
	char *converted_string;
	int len;

	converted_string = (char *)string;
//	ft_strcpy(copy_string, converted_string);
	len = ft_strlen(converted_string);
	counter = 0;
	while (counter < len)
		{
			if (converted_string[counter] == symbol)
				return(&(converted_string[counter]));
			counter++;
		}
	return (0);
}
