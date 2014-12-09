/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroignan <rroignan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 14:21:47 by rroignan          #+#    #+#             */
/*   Updated: 2014/11/21 08:30:19 by rroignan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *c, int fd)
{
	int		i;

	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar_fd(c[i], fd);
		i++;
	}
}