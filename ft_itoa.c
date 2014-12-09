/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroignan <rroignan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 18:22:12 by rroignan          #+#    #+#             */
/*   Updated: 2014/12/09 17:45:55 by rroignan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		str_size(int n)
{
	int			i;

	i = 0;
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char			*ft_itoa(int c)
{
	char	*str;
	char	*ret;
	int		neg;
	int		i;

	neg = 0;
	if (c == 0)
		return ("0");
	else if (c < 0 && c != -2147483648)
	{
		neg = 1;
		c = c * -1;
	}
	if (c == -2147483648)
	{
		ret = ft_strdup("-2147483648");
		return (ret);
	}
	i = str_size(c) + neg;
	str = ft_strnew(i);
	if (neg == 1)
		str[0] = '-';
	while (c > 0)
	{
		i--;
		str[i] = (c % 10 + 48);
		c = c / 10;
	}
	return (str);
}
