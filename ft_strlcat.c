/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroignan <rroignan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 15:43:29 by rroignan          #+#    #+#             */
/*   Updated: 2014/11/27 20:20:03 by rroignan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		l;
	char		*s2;

	i = ft_strlen(dst);
	j = 0;
	l = (size - i);
	s2 = (char *)src;
	if (size == 0)
		return (i);
	else if (size < i)
		return (ft_strlen(src) + size);
	while (j != (l - 1) && s2[j] != '\0')
	{
		dst[i + j] = s2[j];
		j++;
	}
	if (j == (l - 1))
		return (i + ft_strlen(src));
	else
		return (i + j);
}
