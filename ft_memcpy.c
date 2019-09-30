/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:12:09 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/12 14:02:34 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dstt;
	const unsigned char	*srcc;

	dstt = (unsigned char *)dst;
	srcc = (const unsigned char *)src;
	while (n > 0)
	{
		if (!dstt && !srcc)
			return (NULL);
		if (n > 0)
		{
			*dstt = *srcc;
			dstt++;
			srcc++;
		}
		n--;
	}
	return (dst);
}
