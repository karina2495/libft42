/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:13:02 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/22 12:10:10 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dstt;
	const unsigned char	*srcc;
	size_t				k;

	dstt = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	k = 0;
	if (dstt > srcc)
	{
		while (++k <= len)
			dstt[len - k] = srcc[len - k];
	}
	else if (dstt < srcc)
		ft_memcpy(dstt, srcc, len);
	return ((void *)dst);
}
