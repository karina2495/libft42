/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:42:24 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/10 19:04:18 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		k;

	k = 0;
	while (k < len)
	{
		while (src[k] != '\0' && k < len)
		{
			dst[k] = src[k];
			++k;
		}
		while (len > k)
		{
			dst[k] = '\0';
			k++;
		}
	}
	return ((char *)dst);
}
