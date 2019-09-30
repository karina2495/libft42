/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 13:22:17 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/10 16:09:18 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*str;
	unsigned int	l;

	l = 0;
	while (src[l] != '\0')
		l++;
	if (!(str = (char *)malloc(sizeof(*str) * (l + 1))))
		return (NULL);
	l = 0;
	while (src[l] != '\0')
	{
		str[l] = src[l];
		l++;
	}
	str[l] = '\0';
	return ((char *)str);
}
