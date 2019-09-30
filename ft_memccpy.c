/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:29:27 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/14 10:34:17 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dstt;
	unsigned char		*srcc;
	size_t				i;

	dstt = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	while (n > i)
	{
		*dstt = *srcc;
		if (*dstt == (unsigned char)c)
			return ((void *)dst + i + 1);
		dstt++;
		srcc++;
		i++;
	}
	return (NULL);
}
