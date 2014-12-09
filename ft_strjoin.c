/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroignan <rroignan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 17:40:03 by rroignan          #+#    #+#             */
/*   Updated: 2014/11/25 15:27:04 by rroignan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	char	*c1;
	int		i;
	int		j;
	char	*str;

	c = (char *)s1;
	c1 = (char *)s2;
	i = ft_strlen(c);
	j = ft_strlen(c1);
	if (s1 && s2)
	{
		if ((str = (char *)malloc(sizeof(char) * (i + j))) == NULL)
			return (NULL);
		str = ft_strcpy(str, c);
		str = ft_strcat(str, c1);
		return (str);
	}
	return (NULL);
}
