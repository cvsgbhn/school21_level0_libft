/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:46:28 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/09 17:20:50 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *	ft_strncpy(char *destination, char *source, int len)
{
	while (*source && len > 0)
	{
		*destination = *source;
		destination++;
		source++;
		len--;
	}
	*destination = '\0';
	return (destination);
}
