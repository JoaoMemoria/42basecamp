/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-m <jpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:32:45 by jpaulo-m          #+#    #+#             */
/*   Updated: 2021/04/16 01:42:21 by jpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	a;

	a = 1;
	if (nb < 0 && nb / 10 == 0)
		ft_putchar('-');
	if (nb < 0)
		a = -1;
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ft_putchar(((nb % 10) * a) + '0');
}
