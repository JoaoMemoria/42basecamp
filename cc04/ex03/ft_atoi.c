/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-m <jpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 20:12:56 by jpaulo-m          #+#    #+#             */
/*   Updated: 2021/04/16 20:40:01 by jpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	operator;
	int	numbers;

	operator = 1;
	i = 0;
	numbers = 0;
	while (!(str[i] >= '0' && str[i] <= '9')
		&& str[i] != '-' && str[i] != '+')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			operator = -operator;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numbers = (numbers * 10) + str[i] - '0';
		i++;
	}
	return (operator * numbers);
}
