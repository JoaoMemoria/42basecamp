/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-m <jpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 01:08:05 by jpaulo-m          #+#    #+#             */
/*   Updated: 2021/04/11 18:25:50 by jpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tabtemp[size];
	int a;

	a = 0;
	while (a < size)
	{
		tabtemp[a] = *(tab + (size - 1 - a));
		a++;
	}
	a = 0;
	while (a < size)
	{
		tab[a] = tabtemp[a];
		a++;
	}
}
