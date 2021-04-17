/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-m <jpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 01:47:36 by jpaulo-m          #+#    #+#             */
/*   Updated: 2021/04/15 02:19:46 by jpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	ft_strlowcase(str);
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (b == 1)
				str[a] = str[a] - 32;
			b = 0;
		}
		else if (str[a] >= '0' && str[a] <= '9')
			b = 0;
		else
			b = 1;
		a++;
	}
	return (str);
}
