/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-m <jpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:39:28 by jpaulo-m          #+#    #+#             */
/*   Updated: 2021/04/15 00:11:13 by jpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 'A' || str[counter] > 'Z')
			if (str[counter] < 'a' || str[counter] > 'z')
				return (0);
		counter++;
	}
	return (1);
}
