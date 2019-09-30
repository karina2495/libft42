/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfearles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:41:31 by vfearles          #+#    #+#             */
/*   Updated: 2019/09/14 15:17:32 by vfearles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*dst;
	unsigned int	i;

	str = (char *)s;
	if (str)
	{
		if (!(dst = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		if (dst)
		{
			i = 0;
			while (len > i)
			{
				dst[i] = str[i + start];
				i++;
			}
			dst[i] = '\0';
			return (dst);
		}
	}
	return (NULL);
}
